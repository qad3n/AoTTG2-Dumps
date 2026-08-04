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
[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Method)]
public class TypeInferenceRuleAttribute : Attribute
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _rule;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4DAB7C0", Offset = "0x4DAB7C0", VA = "0x4DAB7C0")]
	public TypeInferenceRuleAttribute(TypeInferenceRules rule)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DAB840", Offset = "0x4DAB840", VA = "0x4DAB840")]
	public TypeInferenceRuleAttribute(string rule)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DAB870", Offset = "0x4DAB870", VA = "0x4DAB870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
