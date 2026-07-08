using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x200019D")]
internal abstract class PathFilter
{
	[Token(Token = "0x6000E51")]
	public abstract IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings);

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x3B3C220", Offset = "0x3B3C220", VA = "0x3B3C220")]
	protected static JToken? GetTokenIndex(JToken t, JsonSelectSettings? settings, int index)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x3B43D50", Offset = "0x3B43D50", VA = "0x3B43D50")]
	protected static JToken? GetNextScanValue(JToken originalParent, JToken? container, JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x3B3B6B0", Offset = "0x3B3B6B0", VA = "0x3B3B6B0")]
	protected PathFilter()
	{
	}
}
