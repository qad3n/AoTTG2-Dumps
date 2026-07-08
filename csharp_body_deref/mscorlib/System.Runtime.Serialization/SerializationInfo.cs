using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003F0")]
[ComVisible(true)]
public sealed class SerializationInfo
{
	[Token(Token = "0x400101D")]
	private const int defaultSize = 4;

	[Token(Token = "0x400101E")]
	private const string s_mscorlibAssemblySimpleName = "mscorlib";

	[Token(Token = "0x400101F")]
	private const string s_mscorlibFileName = "mscorlib.dll";

	[Token(Token = "0x4001020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string[] m_members;

	[Token(Token = "0x4001021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal object[] m_data;

	[Token(Token = "0x4001022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Type[] m_types;

	[Token(Token = "0x4001023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<string, int> m_nameToIndex;

	[Token(Token = "0x4001024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal int m_currMember;

	[Token(Token = "0x4001025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal IFormatterConverter m_converter;

	[Token(Token = "0x4001026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string m_fullTypeName;

	[Token(Token = "0x4001027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string m_assemName;

	[Token(Token = "0x4001028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type objectType;

	[Token(Token = "0x4001029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool isFullTypeNameSetExplicit;

	[Token(Token = "0x400102A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool isAssemblyNameSetExplicit;

	[Token(Token = "0x400102B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool requireSameTokenInPartialTrust;

	[Token(Token = "0x17000445")]
	public string FullTypeName
	{
		[Token(Token = "0x6002008")]
		[Address(RVA = "0x4EB9CC0", Offset = "0x4EB9CC0", VA = "0x4EB9CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000446")]
	public string AssemblyName
	{
		[Token(Token = "0x6002009")]
		[Address(RVA = "0x4EB9CD0", Offset = "0x4EB9CD0", VA = "0x4EB9CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000447")]
	public int MemberCount
	{
		[Token(Token = "0x600200E")]
		[Address(RVA = "0x4EB9EB0", Offset = "0x4EB9EB0", VA = "0x4EB9EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000448")]
	public Type ObjectType
	{
		[Token(Token = "0x600200F")]
		[Address(RVA = "0x4EB9EC0", Offset = "0x4EB9EC0", VA = "0x4EB9EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000449")]
	public bool IsFullTypeNameSetExplicit
	{
		[Token(Token = "0x6002010")]
		[Address(RVA = "0x4EB9ED0", Offset = "0x4EB9ED0", VA = "0x4EB9ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044A")]
	public bool IsAssemblyNameSetExplicit
	{
		[Token(Token = "0x6002011")]
		[Address(RVA = "0x4EB9EE0", Offset = "0x4EB9EE0", VA = "0x4EB9EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002006")]
	[Address(RVA = "0x4EB9A70", Offset = "0x4EB9A70", VA = "0x4EB9A70")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter)
	{
	}

	[Token(Token = "0x6002007")]
	[Address(RVA = "0x4EB9A80", Offset = "0x4EB9A80", VA = "0x4EB9A80")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter, bool requireSameTokenInPartialTrust)
	{
	}

	[Token(Token = "0x600200A")]
	[Address(RVA = "0x4EB8D90", Offset = "0x4EB8D90", VA = "0x4EB8D90")]
	public void SetType(Type type)
	{
	}

	[Token(Token = "0x600200B")]
	[Address(RVA = "0x4EB9CF0", Offset = "0x4EB9CF0", VA = "0x4EB9CF0")]
	private static bool Compare(byte[] a, byte[] b)
	{
		return default(bool);
	}

	[Token(Token = "0x600200C")]
	[Address(RVA = "0x4EB9CE0", Offset = "0x4EB9CE0", VA = "0x4EB9CE0")]
	internal static void DemandForUnsafeAssemblyNameAssignments(string originalAssemblyName, string newAssemblyName)
	{
	}

	[Token(Token = "0x600200D")]
	[Address(RVA = "0x4EB9D50", Offset = "0x4EB9D50", VA = "0x4EB9D50")]
	internal static bool IsAssemblyNameAssignmentSafe(string originalAssemblyName, string newAssemblyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x4EB9EF0", Offset = "0x4EB9EF0", VA = "0x4EB9EF0")]
	public SerializationInfoEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x4EB9F60", Offset = "0x4EB9F60", VA = "0x4EB9F60")]
	private void ExpandArrays()
	{
	}

	[Token(Token = "0x6002014")]
	[Address(RVA = "0x4EB8D10", Offset = "0x4EB8D10", VA = "0x4EB8D10")]
	public void AddValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x6002015")]
	[Address(RVA = "0x4EBA250", Offset = "0x4EBA250", VA = "0x4EBA250")]
	public void AddValue(string name, object value)
	{
	}

	[Token(Token = "0x6002016")]
	[Address(RVA = "0x4EBA2C0", Offset = "0x4EBA2C0", VA = "0x4EBA2C0")]
	public void AddValue(string name, bool value)
	{
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x4EBA340", Offset = "0x4EBA340", VA = "0x4EBA340")]
	public void AddValue(string name, byte value)
	{
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x4EBA3C0", Offset = "0x4EBA3C0", VA = "0x4EBA3C0")]
	public void AddValue(string name, short value)
	{
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x4EBA440", Offset = "0x4EBA440", VA = "0x4EBA440")]
	public void AddValue(string name, int value)
	{
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x4EBA4C0", Offset = "0x4EBA4C0", VA = "0x4EBA4C0")]
	public void AddValue(string name, long value)
	{
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x4EBA540", Offset = "0x4EBA540", VA = "0x4EBA540")]
	[CLSCompliant(false)]
	public void AddValue(string name, ulong value)
	{
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x4EBA5C0", Offset = "0x4EBA5C0", VA = "0x4EBA5C0")]
	public void AddValue(string name, float value)
	{
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x4EBA640", Offset = "0x4EBA640", VA = "0x4EBA640")]
	public void AddValue(string name, DateTime value)
	{
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x4EBA070", Offset = "0x4EBA070", VA = "0x4EBA070")]
	internal void AddValueInternal(string name, object value, Type type)
	{
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x4EB5AD0", Offset = "0x4EB5AD0", VA = "0x4EB5AD0")]
	internal void UpdateValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x6002020")]
	[Address(RVA = "0x4EBA6E0", Offset = "0x4EBA6E0", VA = "0x4EBA6E0")]
	private int FindElement(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002021")]
	[Address(RVA = "0x4EBA7A0", Offset = "0x4EBA7A0", VA = "0x4EBA7A0")]
	private object GetElement(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002022")]
	[Address(RVA = "0x4EBA8A0", Offset = "0x4EBA8A0", VA = "0x4EBA8A0")]
	[ComVisible(true)]
	private object GetElementNoThrow(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002023")]
	[Address(RVA = "0x4EB8980", Offset = "0x4EB8980", VA = "0x4EB8980")]
	public object GetValue(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002024")]
	[Address(RVA = "0x4EB8860", Offset = "0x4EB8860", VA = "0x4EB8860")]
	[ComVisible(true)]
	internal object GetValueNoThrow(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002025")]
	[Address(RVA = "0x4EBA920", Offset = "0x4EBA920", VA = "0x4EBA920")]
	public bool GetBoolean(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002026")]
	[Address(RVA = "0x4EBAA70", Offset = "0x4EBAA70", VA = "0x4EBAA70")]
	public int GetInt32(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002027")]
	[Address(RVA = "0x4EBABC0", Offset = "0x4EBABC0", VA = "0x4EBABC0")]
	public long GetInt64(string name)
	{
		return default(long);
	}

	[Token(Token = "0x6002028")]
	[Address(RVA = "0x4EBAD10", Offset = "0x4EBAD10", VA = "0x4EBAD10")]
	public float GetSingle(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6002029")]
	[Address(RVA = "0x4EBAE60", Offset = "0x4EBAE60", VA = "0x4EBAE60")]
	public string GetString(string name)
	{
		return null;
	}
}
