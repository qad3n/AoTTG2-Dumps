using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Serializable]
[Token(Token = "0x20005DA")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method, AllowMultiple = true)]
public sealed class ConditionalAttribute : Attribute
{
	[Token(Token = "0x40019F9")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CConditionString_003Ek__BackingField;

	[Token(Token = "0x6002E58")]
	[Address(RVA = "0x4F949D0", Offset = "0x4F949D0", VA = "0x4F949D0")]
	public ConditionalAttribute(string conditionString)
	{
	}
}
