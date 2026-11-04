namespace loader
{
	// append a row per game build that ships encrypted metadata
	internal static class MetadataSchemes
	{
		internal static readonly MetadataScheme[] kRows =
		{
			new MetadataScheme(
				moduleSha256: "c26c5962dc408f4831ba6400adf92ace62470737dd2630bb4a99e8a5e927512b",
				version: 39,
				headerSeed: 0x771cb2d3cd07d77e,
				headerSize: 0x354,
				sboxRva: 0x3cd50c0,
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
				sectionOrder: new[] { 46, 40, 12, 20, 18, 55, 50, 58, 0, 15, 3, 65, 38, 53, 36, 23, 21, 47, 48, 68, 56, 19, 67, 32, 51, 14, 22, 29, 2, 5, 9 })
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
