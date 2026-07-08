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
		[Address(RVA = "0x4A32430", Offset = "0x4A32430", VA = "0x4A32430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4A32480", Offset = "0x4A32480", VA = "0x4A32480", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4A32500", Offset = "0x4A32500", VA = "0x4A32500", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4A32510", Offset = "0x4A32510", VA = "0x4A32510", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4A32520", Offset = "0x4A32520", VA = "0x4A32520", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x4A32740", Offset = "0x4A32740", VA = "0x4A32740", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x4A329F0", Offset = "0x4A329F0", VA = "0x4A329F0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x4A32A00", Offset = "0x4A32A00", VA = "0x4A32A00")]
	public UnityObjectConverter()
	{
	}
}
