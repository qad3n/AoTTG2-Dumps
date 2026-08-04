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

[Token(Token = "0x20001F0")]
public class GUIStyleState_DirectConverter : fsDirectConverter<GUIStyleState>
{
	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x4D75040", Offset = "0x4D75040", VA = "0x4D75040", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyleState model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x4D75220", Offset = "0x4D75220", VA = "0x4D75220", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyleState model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x4D75450", Offset = "0x4D75450", VA = "0x4D75450", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x4D75490", Offset = "0x4D75490", VA = "0x4D75490")]
	public GUIStyleState_DirectConverter()
	{
	}
}
