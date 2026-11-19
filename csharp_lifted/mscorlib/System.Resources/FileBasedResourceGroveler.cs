// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.FileBasedResourceGroveler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004BF")]
internal class FileBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x40012D1")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x53CD960", Offset = "0x53CC960", VA = "0x53CD960")]
	public FileBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x53CD990", Offset = "0x53CC990", VA = "0x53CD990", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023B3")]
	[Address(RVA = "0x53CDBE0", Offset = "0x53CCBE0", VA = "0x53CDBE0")]
	private string FindResourceFile(CultureInfo culture, string fileName)
	{
		return null;
	}

	[Token(Token = "0x60023B4")]
	[Address(RVA = "0x53CDC90", Offset = "0x53CCC90", VA = "0x53CDC90")]
	private ResourceSet CreateResourceSet(string file)
	{
		return null;
	}
}
