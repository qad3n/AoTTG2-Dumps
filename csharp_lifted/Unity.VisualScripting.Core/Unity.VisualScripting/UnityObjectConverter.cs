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
	[Token(Token = "0x170001A7")]
	private List<UnityEngine.Object> objectReferences
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x6841BB0", Offset = "0x6840BB0", VA = "0x6841BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x6841C00", Offset = "0x6840C00", VA = "0x6841C00", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x6841C80", Offset = "0x6840C80", VA = "0x6841C80", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x6841C90", Offset = "0x6840C90", VA = "0x6841C90", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x6841CA0", Offset = "0x6840CA0", VA = "0x6841CA0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x6841EC0", Offset = "0x6840EC0", VA = "0x6841EC0", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x6842180", Offset = "0x6841180", VA = "0x6842180", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x6842190", Offset = "0x6841190", VA = "0x6842190")]
	public UnityObjectConverter()
	{
	}
}
