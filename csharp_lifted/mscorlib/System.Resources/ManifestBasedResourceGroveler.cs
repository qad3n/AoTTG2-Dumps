// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ManifestBasedResourceGroveler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004C1")]
internal class ManifestBasedResourceGroveler : System.Resources.IResourceGroveler
{
	[Token(Token = "0x40012D2")]
	[FieldOffset(Offset = "0x10")]
	private ResourceManager.ResourceManagerMediator _mediator;

	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x53CDF70", Offset = "0x53CCF70", VA = "0x53CDF70")]
	public ManifestBasedResourceGroveler(ResourceManager.ResourceManagerMediator mediator)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023B7")]
	[Address(RVA = "0x53CDFA0", Offset = "0x53CCFA0", VA = "0x53CDFA0", Slot = "4")]
	public ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023B8")]
	[Address(RVA = "0x53CE280", Offset = "0x53CD280", VA = "0x53CE280")]
	private CultureInfo UltimateFallbackFixup(CultureInfo lookForCulture)
	{
		return null;
	}

	[Token(Token = "0x60023B9")]
	[Address(RVA = "0x53CF690", Offset = "0x53CE690", VA = "0x53CF690")]
	internal static CultureInfo GetNeutralResourcesLanguage(Assembly a, ref UltimateResourceFallbackLocation fallbackLocation)
	{
		return null;
	}

	[Token(Token = "0x60023BA")]
	[Address(RVA = "0x53CEA20", Offset = "0x53CDA20", VA = "0x53CEA20")]
	internal ResourceSet CreateResourceSet(Stream store, Assembly assembly)
	{
		return null;
	}

	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x53CE950", Offset = "0x53CD950", VA = "0x53CE950")]
	private Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, string fileName, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x53CFBB0", Offset = "0x53CEBB0", VA = "0x53CFBB0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60023BD")]
	[Address(RVA = "0x53CE390", Offset = "0x53CD390", VA = "0x53CE390")]
	private System.Reflection.RuntimeAssembly GetSatelliteAssembly(CultureInfo lookForCulture, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60023BE")]
	[Address(RVA = "0x53CFA60", Offset = "0x53CEA60", VA = "0x53CFA60")]
	private bool CanUseDefaultResourceClasses(string readerTypeName, string resSetTypeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60023BF")]
	[Address(RVA = "0x53CFF70", Offset = "0x53CEF70", VA = "0x53CFF70")]
	private string GetSatelliteAssemblyName()
	{
		return null;
	}

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x53CE570", Offset = "0x53CD570", VA = "0x53CE570")]
	private void HandleSatelliteMissing()
	{
	}

	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x53CF3C0", Offset = "0x53CE3C0", VA = "0x53CF3C0")]
	private void HandleResourceStreamMissing(string fileName)
	{
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x53CF9F0", Offset = "0x53CE9F0", VA = "0x53CF9F0")]
	private static bool GetNeutralResourcesLanguageAttribute(Assembly assembly, ref string cultureName, ref short fallbackLocation)
	{
		return default(bool);
	}
}
