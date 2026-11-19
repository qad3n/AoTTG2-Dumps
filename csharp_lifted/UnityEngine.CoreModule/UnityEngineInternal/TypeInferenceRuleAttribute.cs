// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngineInternal.TypeInferenceRuleAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngineInternal;

[Serializable]
[Token(Token = "0x2000008")]
[AttributeUsage(AttributeTargets.Method)]
public class TypeInferenceRuleAttribute : Attribute
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _rule;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x68B2AD0", Offset = "0x68B1AD0", VA = "0x68B2AD0")]
	public TypeInferenceRuleAttribute(TypeInferenceRules rule)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x68B2B50", Offset = "0x68B1B50", VA = "0x68B2B50")]
	public TypeInferenceRuleAttribute(string rule)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x68B2B80", Offset = "0x68B1B80", VA = "0x68B2B80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
