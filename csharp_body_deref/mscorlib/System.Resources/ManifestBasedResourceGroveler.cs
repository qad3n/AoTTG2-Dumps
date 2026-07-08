using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004B8")]
internal class ManifestBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x6002366")]
	[Address(RVA = "0x4EE0C90", Offset = "0x4EE0C90", VA = "0x4EE0C90")]
	public ManifestBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002367")]
	[Address(RVA = "0x4EE0CC0", Offset = "0x4EE0CC0", VA = "0x4EE0CC0", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002368")]
	[Address(RVA = "0x4EE0FC0", Offset = "0x4EE0FC0", VA = "0x4EE0FC0")]
	private CultureInfo UltimateFallbackFixup(CultureInfo lookForCulture)
	{
		return null;
	}

	[Token(Token = "0x6002369")]
	[Address(RVA = "0x4EE2490", Offset = "0x4EE2490", VA = "0x4EE2490")]
	internal static CultureInfo GetNeutralResourcesLanguage(Assembly a, ref UltimateResourceFallbackLocation fallbackLocation)
	{
		return null;
	}

	[Token(Token = "0x600236A")]
	[Address(RVA = "0x4EE1790", Offset = "0x4EE1790", VA = "0x4EE1790")]
	internal ResourceSet CreateResourceSet(Stream store, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x600236B")]
	[Address(RVA = "0x4EE16C0", Offset = "0x4EE16C0", VA = "0x4EE16C0")]
	private Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, string fileName, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600236C")]
	[Address(RVA = "0x4EE29C0", Offset = "0x4EE29C0", VA = "0x4EE29C0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600236D")]
	[Address(RVA = "0x4EE10D0", Offset = "0x4EE10D0", VA = "0x4EE10D0")]
	private System.Reflection.RuntimeAssembly GetSatelliteAssembly(CultureInfo lookForCulture, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x600236E")]
	[Address(RVA = "0x4EE2870", Offset = "0x4EE2870", VA = "0x4EE2870")]
	private bool CanUseDefaultResourceClasses(string readerTypeName, string resSetTypeName)
	{
		return default(bool);
	}

	[Token(Token = "0x600236F")]
	[Address(RVA = "0x4EE2DB0", Offset = "0x4EE2DB0", VA = "0x4EE2DB0")]
	private string GetSatelliteAssemblyName()
	{
		return null;
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x4EE12E0", Offset = "0x4EE12E0", VA = "0x4EE12E0")]
	private void HandleSatelliteMissing()
	{
	}

	[Token(Token = "0x6002371")]
	[Address(RVA = "0x4EE21C0", Offset = "0x4EE21C0", VA = "0x4EE21C0")]
	private void HandleResourceStreamMissing(string fileName)
	{
	}

	[Token(Token = "0x6002372")]
	[Address(RVA = "0x4EE2800", Offset = "0x4EE2800", VA = "0x4EE2800")]
	private static bool GetNeutralResourcesLanguageAttribute(Assembly assembly, ref string cultureName, ref short fallbackLocation)
	{
		return default(bool);
	}
}
