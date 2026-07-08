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
	[Address(RVA = "0x3B47250", Offset = "0x3B47250", VA = "0x3B47250")]
	private RootFilter()
	{
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x3B47260", Offset = "0x3B47260", VA = "0x3B47260", Slot = "4")]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
