// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.RootFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A6")]
internal class RootFilter : PathFilter
{
	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RootFilter Instance;

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x3E3CBA0", Offset = "0x3E3CBA0", VA = "0x3E3CBA0")]
	private RootFilter()
	{
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x3E3CBB0", Offset = "0x3E3CBB0", VA = "0x3E3CBB0", Slot = "4")]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
