// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.GUIStyleState_DirectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DF")]
public class GUIStyleState_DirectConverter : fsDirectConverter<GUIStyleState>
{
	[Token(Token = "0x600117C")]
	[Address(RVA = "0x2E50BF0", Offset = "0x2E4F1F0", VA = "0x182E50BF0", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyleState model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x2E509F0", Offset = "0x2E4EFF0", VA = "0x182E509F0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyleState model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x2E509A0", Offset = "0x2E4EFA0", VA = "0x182E509A0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x2E50D90", Offset = "0x2E4F390", VA = "0x182E50D90")]
	public GUIStyleState_DirectConverter()
	{
	}
}
