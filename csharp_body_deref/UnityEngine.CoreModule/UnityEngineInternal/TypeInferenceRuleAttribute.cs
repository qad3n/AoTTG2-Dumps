using System;
using Il2CppDummyDll;

namespace UnityEngineInternal;

[Serializable]
[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Method)]
public class TypeInferenceRuleAttribute : Attribute
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _rule;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4A83FA0", Offset = "0x4A83FA0", VA = "0x4A83FA0")]
	public TypeInferenceRuleAttribute(TypeInferenceRules rule)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4A84020", Offset = "0x4A84020", VA = "0x4A84020")]
	public TypeInferenceRuleAttribute(string rule)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A84050", Offset = "0x4A84050", VA = "0x4A84050", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
