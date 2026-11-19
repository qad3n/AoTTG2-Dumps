// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MinIntParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000204")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x170001EC")]
	public override int value
	{
		[Token(Token = "0x6000F1D")]
		[Address(RVA = "0x6555560", Offset = "0x6554560", VA = "0x6555560", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x6555570", Offset = "0x6554570", VA = "0x6555570", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x6555580", Offset = "0x6554580", VA = "0x6555580")]
	public MinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
