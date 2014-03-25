CREATE TABLE  `aj`.`clientes` (
  `id` int(11) NOT NULL auto_increment,
  `nome` varchar(20) NOT NULL,
  `cpf` varchar(20) NOT NULL,
  `telefone` varchar(20) NOT NULL,
  `email` varchar(30) default NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;
CREATE TABLE  `aj`.`itenspedidos` (
  `id` int(11) NOT NULL auto_increment,
  `quantidade` int(11) NOT NULL,
  `idProduto` int(11) NOT NULL,
  `idPedido` int(11) NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idProduto` (`idProduto`),
  KEY `idPedido` (`idPedido`),
  CONSTRAINT `itenspedidos_ibfk_1` FOREIGN KEY (`idProduto`) REFERENCES `produtos` (`id`),
  CONSTRAINT `itenspedidos_ibfk_2` FOREIGN KEY (`idPedido`) REFERENCES `pedidos` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;
CREATE TABLE  `aj`.`pedidos` (
  `id` int(11) NOT NULL auto_increment,
  `numero` varchar(20) NOT NULL,
  `idCliente` int(11) NOT NULL,
  PRIMARY KEY  (`id`),
  KEY `idCliente` (`idCliente`),
  CONSTRAINT `pedidos_ibfk_1` FOREIGN KEY (`idCliente`) REFERENCES `clientes` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=latin1;
CREATE TABLE  `aj`.`produtos` (
  `id` int(11) NOT NULL auto_increment,
  `nome` varchar(50) default NULL,
  `codigo` varchar(50) default NULL,
  `preco` double default NULL,
  `descricao` varchar(50) default NULL,
  `image` varchar(50) default NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=88 DEFAULT CHARSET=latin1;