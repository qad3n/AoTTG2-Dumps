using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004B6")]
internal class FileBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x6002361")]
	[Address(RVA = "0x4EE0620", Offset = "0x4EE0620", VA = "0x4EE0620")]
	public FileBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x4EE0650", Offset = "0x4EE0650", VA = "0x4EE0650", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x4EE08F0", Offset = "0x4EE08F0", VA = "0x4EE08F0")]
	private string FindResourceFile(CultureInfo culture, string fileName)
	{
		return null;
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x4EE09A0", Offset = "0x4EE09A0", VA = "0x4EE09A0")]
	private ResourceSet CreateResourceSet(string file)
	{
		return null;
	}
}
