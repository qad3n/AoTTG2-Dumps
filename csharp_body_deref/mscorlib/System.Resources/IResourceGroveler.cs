// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.IResourceGroveler
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

[Token(Token = "0x20004B7")]
internal interface IResourceGroveler
{
	[Token(Token = "0x6002365")]
	ResourceSet GrovelForResourceSet(CultureInfo culture, Dictionary<string, ResourceSet> localResourceSets, bool tryParents, bool createIfNotExists, ref System.Threading.StackCrawlMark stackMark);
}
