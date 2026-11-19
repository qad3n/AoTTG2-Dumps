namespace loader
{
	// one encrypted table: where its offset and size sit in the decrypted header, the bias the reader adds and its keystream seed
	internal readonly record struct MetadataSpan(int offsetField, int sizeField, int bias, ulong seed);

	// where an encrypted header record keeps its element count and byte size
	internal readonly record struct MetadataRecord(int countField, int sizeField);

	// one stock section: the header record that describes it and any zero padding the build adds ahead of it past 4 byte alignment
	internal readonly record struct MetadataSection(int record, int padding = 0);

	// how one game module encrypts global-metadata.dat, every field here read out of that module by a static extractor
	internal sealed record MetadataScheme(string moduleSha256, int version, ulong headerSeed, int headerSize, uint sboxRva, MetadataRecord record, MetadataSpan[] spans, MetadataSection[] sections);
}
