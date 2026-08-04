// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnityObjectConverter
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

[Token(Token = "0x2000180")]
public class UnityObjectConverter : fsConverter
{
	[Token(Token = "0x170001A4")]
	private List<UnityEngine.Object> objectReferences
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x4D57000", Offset = "0x4D57000", VA = "0x4D57000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4D57050", Offset = "0x4D57050", VA = "0x4D57050", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4D570D0", Offset = "0x4D570D0", VA = "0x4D570D0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4D570E0", Offset = "0x4D570E0", VA = "0x4D570E0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4D570F0", Offset = "0x4D570F0", VA = "0x4D570F0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x4D57310", Offset = "0x4D57310", VA = "0x4D57310", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x4D575C0", Offset = "0x4D575C0", VA = "0x4D575C0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x4D575D0", Offset = "0x4D575D0", VA = "0x4D575D0")]
	public UnityObjectConverter()
	{
	}
}
