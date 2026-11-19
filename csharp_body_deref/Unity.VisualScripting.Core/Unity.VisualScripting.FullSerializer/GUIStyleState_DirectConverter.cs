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
	[Address(RVA = "0x68533A0", Offset = "0x68523A0", VA = "0x68533A0", Slot = "10")]
	protected override fsResult DoSerialize(GUIStyleState model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x68534F0", Offset = "0x68524F0", VA = "0x68534F0", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref GUIStyleState model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117E")]
	[Address(RVA = "0x68536A0", Offset = "0x68526A0", VA = "0x68536A0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x68536E0", Offset = "0x68526E0", VA = "0x68536E0")]
	public GUIStyleState_DirectConverter()
	{
	}
}
