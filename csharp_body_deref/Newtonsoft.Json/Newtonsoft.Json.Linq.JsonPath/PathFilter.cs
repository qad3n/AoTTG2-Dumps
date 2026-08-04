// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.PathFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x200019D")]
internal abstract class PathFilter
{
	[Token(Token = "0x6000E51")]
	public abstract IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings);

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x3E31B70", Offset = "0x3E31B70", VA = "0x3E31B70")]
	protected static JToken? GetTokenIndex(JToken t, JsonSelectSettings? settings, int index)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x3E396A0", Offset = "0x3E396A0", VA = "0x3E396A0")]
	protected static JToken? GetNextScanValue(JToken originalParent, JToken? container, JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x3E31000", Offset = "0x3E31000", VA = "0x3E31000")]
	protected PathFilter()
	{
	}
}
