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
	[Address(RVA = "0x2E51F60", Offset = "0x2E50560", VA = "0x182E51F60", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyle model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x2E50E20", Offset = "0x2E4F420", VA = "0x182E50E20", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyle model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x2E50DD0", Offset = "0x2E4F3D0", VA = "0x182E50DD0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x2E52B50", Offset = "0x2E51150", VA = "0x182E52B50")]
	public GUIStyle_DirectConverter()
	{
	}
}
