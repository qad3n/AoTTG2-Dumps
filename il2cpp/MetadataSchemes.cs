namespace loader
{
	// append a row per game build that ships encrypted metadata
	internal static class MetadataSchemes
	{
		internal static readonly MetadataScheme[] kRows =
		{
			// aottg2 windows build from november 1 2026
			new MetadataScheme(
				moduleSha256: "c26c5962dc408f4831ba6400adf92ace62470737dd2630bb4a99e8a5e927512b",
				version: 39,
				headerSeed: 0x771cb2d3cd07d77e,
				headerSize: 0x354,
				sboxRva: 0x3cd50c0,
				record: new MetadataRecord(countField: 4, sizeField: 8),
				spans: new[]
				{
					new MetadataSpan(0x1e0, 0x1e8, -0x1550, 0x87cc880954ba1168),
					new MetadataSpan(0xd8, 0xe0, 0x618, 0xbbda6c45f02f2419),
					new MetadataSpan(0x228, 0x230, -0xae0, 0x8e1591f26cf82efd),
					new MetadataSpan(0x294, 0x29c, -0x1198, 0xbc2370e072a9a79c),
					new MetadataSpan(0xe4, 0xec, 0xd9c, 0xf3539e18e2e879fe),
					new MetadataSpan(0x90, 0x98, 0x774, 0xc1ca1f87f9e9a94e),
					new MetadataSpan(0x30c, 0x314, -0x16a8, 0x74595918cd2c2725)
				},
				sections: new[]
				{
					new MetadataSection(46), new MetadataSection(40), new MetadataSection(12), new MetadataSection(20), new MetadataSection(18), new MetadataSection(55), new MetadataSection(50), new MetadataSection(58),
					new MetadataSection(0), new MetadataSection(15), new MetadataSection(3), new MetadataSection(65), new MetadataSection(38), new MetadataSection(53), new MetadataSection(36), new MetadataSection(23),
					new MetadataSection(21), new MetadataSection(47), new MetadataSection(48), new MetadataSection(68), new MetadataSection(56), new MetadataSection(19), new MetadataSection(67), new MetadataSection(32),
					new MetadataSection(51), new MetadataSection(14), new MetadataSection(22), new MetadataSection(29), new MetadataSection(2), new MetadataSection(5), new MetadataSection(9)
				}),
			// aottg2 linux build from november 16 2026
			new MetadataScheme(
				moduleSha256: "37090b80b11b3be23d612a6850d7d2c52c6fffe8d45fc236f904b2a8d28473b1",
				version: 39,
				headerSeed: 0x99660edfc440c3ec,
				headerSize: 0x444,
				sboxRva: 0x1532970,
				record: new MetadataRecord(countField: 0, sizeField: 8),
				spans: new[]
				{
					new MetadataSpan(0xd0, 0xd4, 0xf0c, 0x75c6d0eb4abc8d1b),
					new MetadataSpan(0x3e8, 0x3ec, -0x124, 0x92b3dc9f9cc10845),
					new MetadataSpan(0x1d8, 0x1dc, -0x51c, 0xb624772ad35f3a23),
					new MetadataSpan(0x34, 0x38, -0x848, 0x96ddcc57ebb39ae8),
					new MetadataSpan(0x3f4, 0x3f8, -0xefc, 0xab4099250f5a5999),
					new MetadataSpan(0x1c0, 0x1c4, 0x1d3c, 0x0118f2557cb4e7f7),
					new MetadataSpan(0x394, 0x398, 0x6e0, 0x4cfc97b93bf5f979)
				},
				sections: new[]
				{
					new MetadataSection(76), new MetadataSection(83), new MetadataSection(39), new MetadataSection(7), new MetadataSection(17), new MetadataSection(84), new MetadataSection(46), new MetadataSection(5),
					new MetadataSection(48, 4), new MetadataSection(31), new MetadataSection(64), new MetadataSection(4), new MetadataSection(77), new MetadataSection(0), new MetadataSection(42), new MetadataSection(54),
					new MetadataSection(23), new MetadataSection(36), new MetadataSection(79), new MetadataSection(16), new MetadataSection(20), new MetadataSection(37), new MetadataSection(13), new MetadataSection(24),
					new MetadataSection(9), new MetadataSection(56), new MetadataSection(88), new MetadataSection(81), new MetadataSection(78), new MetadataSection(51), new MetadataSection(89)
				})
		};

		internal static MetadataScheme find(string moduleSha256)
		{
			foreach (MetadataScheme scheme in MetadataSchemes.kRows)
			{
				if (scheme.moduleSha256 == moduleSha256)
					return scheme;
			}

			return null;
		}
	}
}
