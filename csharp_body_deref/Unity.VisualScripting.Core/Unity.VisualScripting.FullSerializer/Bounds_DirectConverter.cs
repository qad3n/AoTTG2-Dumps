// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Bounds_DirectConverter
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

[Token(Token = "0x20001EE")]
public class Bounds_DirectConverter : fsDirectConverter<Bounds>
{
	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x4D742C0", Offset = "0x4D742C0", VA = "0x4D742C0", Slot = "10")]
	protected override fsResult DoSerialize(Bounds model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x4D74470", Offset = "0x4D74470", VA = "0x4D74470", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Bounds model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x4D74690", Offset = "0x4D74690", VA = "0x4D74690", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x4D746E0", Offset = "0x4D746E0", VA = "0x4D746E0")]
	public Bounds_DirectConverter()
	{
	}
}
