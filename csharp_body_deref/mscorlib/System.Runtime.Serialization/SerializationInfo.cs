// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x200041F")]
[ComVisible(true)]
public sealed class SerializationInfo
{
	[Token(Token = "0x4001022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string[] m_members;

	[Token(Token = "0x4001023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal object[] m_data;

	[Token(Token = "0x4001024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Type[] m_types;

	[Token(Token = "0x4001025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<string, int> m_nameToIndex;

	[Token(Token = "0x4001026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal int m_currMember;

	[Token(Token = "0x4001027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal IFormatterConverter m_converter;

	[Token(Token = "0x4001028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string m_fullTypeName;

	[Token(Token = "0x4001029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string m_assemName;

	[Token(Token = "0x400102A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type objectType;

	[Token(Token = "0x400102B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool isFullTypeNameSetExplicit;

	[Token(Token = "0x400102C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool isAssemblyNameSetExplicit;

	[Token(Token = "0x400102D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool requireSameTokenInPartialTrust;

	[Token(Token = "0x17000447")]
	public string FullTypeName
	{
		[Token(Token = "0x6002077")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000448")]
	public string AssemblyName
	{
		[Token(Token = "0x6002078")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000449")]
	public int MemberCount
	{
		[Token(Token = "0x600207D")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700044A")]
	public Type ObjectType
	{
		[Token(Token = "0x600207E")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044B")]
	public bool IsFullTypeNameSetExplicit
	{
		[Token(Token = "0x600207F")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044C")]
	public bool IsAssemblyNameSetExplicit
	{
		[Token(Token = "0x6002080")]
		[Address(RVA = "0x1A21E30", Offset = "0x1A20430", VA = "0x181A21E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x1A21BB0", Offset = "0x1A201B0", VA = "0x181A21BB0")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter)
	{
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x1A21BD0", Offset = "0x1A201D0", VA = "0x181A21BD0")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter, bool requireSameTokenInPartialTrust)
	{
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x1A21850", Offset = "0x1A1FE50", VA = "0x181A21850")]
	public void SetType(Type type)
	{
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x1A20670", Offset = "0x1A1EC70", VA = "0x181A20670")]
	private static bool Compare(byte[] a, byte[] b)
	{
		return default(bool);
	}

	[Token(Token = "0x600207B")]
	[Address(RVA = "0x1A206E0", Offset = "0x1A1ECE0", VA = "0x181A206E0")]
	internal static void DemandForUnsafeAssemblyNameAssignments(string originalAssemblyName, string newAssemblyName)
	{
	}

	[Token(Token = "0x600207C")]
	[Address(RVA = "0x1A216B0", Offset = "0x1A1FCB0", VA = "0x181A216B0")]
	internal static bool IsAssemblyNameAssignmentSafe(string originalAssemblyName, string newAssemblyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x1A20D20", Offset = "0x1A1F320", VA = "0x181A20D20")]
	public SerializationInfoEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x1A206F0", Offset = "0x1A1ECF0", VA = "0x181A206F0")]
	private void ExpandArrays()
	{
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x1A1FB30", Offset = "0x1A1E130", VA = "0x181A1FB30")]
	public void AddValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x1A1FD00", Offset = "0x1A1E300", VA = "0x181A1FD00")]
	public void AddValue(string name, object value)
	{
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x1A20560", Offset = "0x1A1EB60", VA = "0x181A20560")]
	public void AddValue(string name, bool value)
	{
	}

	[Token(Token = "0x6002086")]
	[Address(RVA = "0x1A1FFE0", Offset = "0x1A1E5E0", VA = "0x181A1FFE0")]
	public void AddValue(string name, byte value)
	{
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x1A200F0", Offset = "0x1A1E6F0", VA = "0x181A200F0")]
	public void AddValue(string name, short value)
	{
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x1A20340", Offset = "0x1A1E940", VA = "0x181A20340")]
	public void AddValue(string name, int value)
	{
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x1A1FBF0", Offset = "0x1A1E1F0", VA = "0x181A1FBF0")]
	public void AddValue(string name, long value)
	{
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x1A20450", Offset = "0x1A1EA50", VA = "0x181A20450")]
	[CLSCompliant(false)]
	public void AddValue(string name, ulong value)
	{
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x1A1FED0", Offset = "0x1A1E4D0", VA = "0x181A1FED0")]
	public void AddValue(string name, float value)
	{
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x1A20200", Offset = "0x1A1E800", VA = "0x181A20200")]
	public void AddValue(string name, DateTime value)
	{
	}

	[Token(Token = "0x600208D")]
	[Address(RVA = "0x1A1F830", Offset = "0x1A1DE30", VA = "0x181A1F830")]
	internal void AddValueInternal(string name, object value, Type type)
	{
	}

	[Token(Token = "0x600208E")]
	[Address(RVA = "0x1A219F0", Offset = "0x1A1FFF0", VA = "0x181A219F0")]
	internal void UpdateValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x600208F")]
	[Address(RVA = "0x1A207F0", Offset = "0x1A1EDF0", VA = "0x181A207F0")]
	private int FindElement(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002090")]
	[Address(RVA = "0x1A20B50", Offset = "0x1A1F150", VA = "0x181A20B50")]
	private object GetElement(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002091")]
	[Address(RVA = "0x1A20A00", Offset = "0x1A1F000", VA = "0x181A20A00")]
	[ComVisible(true)]
	private object GetElementNoThrow(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002092")]
	[Address(RVA = "0x1A214D0", Offset = "0x1A1FAD0", VA = "0x181A214D0")]
	public object GetValue(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002093")]
	[Address(RVA = "0x1A212E0", Offset = "0x1A1F8E0", VA = "0x181A212E0")]
	[ComVisible(true)]
	internal object GetValueNoThrow(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002094")]
	[Address(RVA = "0x1A208B0", Offset = "0x1A1EEB0", VA = "0x181A208B0")]
	public bool GetBoolean(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002095")]
	[Address(RVA = "0x1A20DA0", Offset = "0x1A1F3A0", VA = "0x181A20DA0")]
	public int GetInt32(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002096")]
	[Address(RVA = "0x1A20EF0", Offset = "0x1A1F4F0", VA = "0x181A20EF0")]
	public long GetInt64(string name)
	{
		return default(long);
	}

	[Token(Token = "0x6002097")]
	[Address(RVA = "0x1A21040", Offset = "0x1A1F640", VA = "0x181A21040")]
	public float GetSingle(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6002098")]
	[Address(RVA = "0x1A21190", Offset = "0x1A1F790", VA = "0x181A21190")]
	public string GetString(string name)
	{
		return null;
	}
}
