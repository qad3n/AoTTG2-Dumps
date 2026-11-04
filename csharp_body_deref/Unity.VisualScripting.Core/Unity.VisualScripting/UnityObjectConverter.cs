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
		[Address(RVA = "0x2E4E500", Offset = "0x2E4CB00", VA = "0x182E4E500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x2E4DF90", Offset = "0x2E4C590", VA = "0x182E4DF90", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x2E4E2D0", Offset = "0x2E4C8D0", VA = "0x182E4E2D0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x2E4E010", Offset = "0x2E4C610", VA = "0x182E4E010", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UnityObjectConverter()
	{
	}
}
