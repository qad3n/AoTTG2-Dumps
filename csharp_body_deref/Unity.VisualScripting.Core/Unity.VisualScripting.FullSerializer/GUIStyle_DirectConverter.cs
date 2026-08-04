// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.GUIStyle_DirectConverter
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

[Token(Token = "0x20001F1")]
public class GUIStyle_DirectConverter : fsDirectConverter<GUIStyle>
{
	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x4D754D0", Offset = "0x4D754D0", VA = "0x4D754D0", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyle model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x4D764D0", Offset = "0x4D764D0", VA = "0x4D764D0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyle model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x4D77A90", Offset = "0x4D77A90", VA = "0x4D77A90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x4D77AD0", Offset = "0x4D77AD0", VA = "0x4D77AD0")]
	public GUIStyle_DirectConverter()
	{
	}
}
