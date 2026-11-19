// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Ray2DConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200017E")]
public class Ray2DConverter : fsDirectConverter<Ray2D>
{
	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x6841420", Offset = "0x6840420", VA = "0x6841420", Slot = "10")]
	protected override fsResult DoSerialize(Ray2D model, Dictionary<string, fsData> serialized)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x6841530", Offset = "0x6840530", VA = "0x6841530", Slot = "11")]
	protected override fsResult DoDeserialize(Dictionary<string, fsData> data, ref Ray2D model)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x6841740", Offset = "0x6840740", VA = "0x6841740", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x6841780", Offset = "0x6840780", VA = "0x6841780")]
	public Ray2DConverter()
	{
	}
}
