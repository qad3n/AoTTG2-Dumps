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

[Token(Token = "0x20001E0")]
public class GUIStyle_DirectConverter : fsDirectConverter<GUIStyle>
{
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x6853720", Offset = "0x6852720", VA = "0x6853720", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyle model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x6854080", Offset = "0x6853080", VA = "0x6854080", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyle model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x6854F10", Offset = "0x6853F10", VA = "0x6854F10", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x6854F50", Offset = "0x6853F50", VA = "0x6854F50")]
	public GUIStyle_DirectConverter()
	{
	}
}
