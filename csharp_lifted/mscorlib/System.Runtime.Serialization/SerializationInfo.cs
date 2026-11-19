// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003F8")]
[ComVisible(true)]
public sealed class SerializationInfo
{
	[Token(Token = "0x4000F82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string[] m_members;

	[Token(Token = "0x4000F83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal object[] m_data;

	[Token(Token = "0x4000F84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Type[] m_types;

	[Token(Token = "0x4000F85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<string, int> m_nameToIndex;

	[Token(Token = "0x4000F86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal int m_currMember;

	[Token(Token = "0x4000F87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal IFormatterConverter m_converter;

	[Token(Token = "0x4000F88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string m_fullTypeName;

	[Token(Token = "0x4000F89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string m_assemName;

	[Token(Token = "0x4000F8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type objectType;

	[Token(Token = "0x4000F8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool isFullTypeNameSetExplicit;

	[Token(Token = "0x4000F8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool isAssemblyNameSetExplicit;

	[Token(Token = "0x4000F8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool requireSameTokenInPartialTrust;

	[Token(Token = "0x17000446")]
	public string FullTypeName
	{
		[Token(Token = "0x600204D")]
		[Address(RVA = "0x53A6CB0", Offset = "0x53A5CB0", VA = "0x53A6CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000447")]
	public string AssemblyName
	{
		[Token(Token = "0x600204E")]
		[Address(RVA = "0x53A6CC0", Offset = "0x53A5CC0", VA = "0x53A6CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000448")]
	public int MemberCount
	{
		[Token(Token = "0x6002053")]
		[Address(RVA = "0x53A6EB0", Offset = "0x53A5EB0", VA = "0x53A6EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000449")]
	public Type ObjectType
	{
		[Token(Token = "0x6002054")]
		[Address(RVA = "0x53A6EC0", Offset = "0x53A5EC0", VA = "0x53A6EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044A")]
	public bool IsFullTypeNameSetExplicit
	{
		[Token(Token = "0x6002055")]
		[Address(RVA = "0x53A6ED0", Offset = "0x53A5ED0", VA = "0x53A6ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044B")]
	public bool IsAssemblyNameSetExplicit
	{
		[Token(Token = "0x6002056")]
		[Address(RVA = "0x53A6EE0", Offset = "0x53A5EE0", VA = "0x53A6EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x53A6A60", Offset = "0x53A5A60", VA = "0x53A6A60")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter)
	{
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x53A6A70", Offset = "0x53A5A70", VA = "0x53A6A70")]
	[CLSCompliant(false)]
	public SerializationInfo(Type type, IFormatterConverter converter, bool requireSameTokenInPartialTrust)
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x53A5DE0", Offset = "0x53A4DE0", VA = "0x53A5DE0")]
	public void SetType(Type type)
	{
	}

	[Token(Token = "0x6002050")]
	[Address(RVA = "0x53A6CE0", Offset = "0x53A5CE0", VA = "0x53A6CE0")]
	private static bool Compare(byte[] a, byte[] b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002051")]
	[Address(RVA = "0x53A6CD0", Offset = "0x53A5CD0", VA = "0x53A6CD0")]
	internal static void DemandForUnsafeAssemblyNameAssignments(string originalAssemblyName, string newAssemblyName)
	{
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x53A6D40", Offset = "0x53A5D40", VA = "0x53A6D40")]
	internal static bool IsAssemblyNameAssignmentSafe(string originalAssemblyName, string newAssemblyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x53A6EF0", Offset = "0x53A5EF0", VA = "0x53A6EF0")]
	public SerializationInfoEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x53A6F60", Offset = "0x53A5F60", VA = "0x53A6F60")]
	private void ExpandArrays()
	{
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x53A5D60", Offset = "0x53A4D60", VA = "0x53A5D60")]
	public void AddValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x53A7260", Offset = "0x53A6260", VA = "0x53A7260")]
	public void AddValue(string name, object value)
	{
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x53A72D0", Offset = "0x53A62D0", VA = "0x53A72D0")]
	public void AddValue(string name, bool value)
	{
	}

	[Token(Token = "0x600205C")]
	[Address(RVA = "0x53A7350", Offset = "0x53A6350", VA = "0x53A7350")]
	public void AddValue(string name, byte value)
	{
	}

	[Token(Token = "0x600205D")]
	[Address(RVA = "0x53A73D0", Offset = "0x53A63D0", VA = "0x53A73D0")]
	public void AddValue(string name, short value)
	{
	}

	[Token(Token = "0x600205E")]
	[Address(RVA = "0x53A7450", Offset = "0x53A6450", VA = "0x53A7450")]
	public void AddValue(string name, int value)
	{
	}

	[Token(Token = "0x600205F")]
	[Address(RVA = "0x53A74D0", Offset = "0x53A64D0", VA = "0x53A74D0")]
	public void AddValue(string name, long value)
	{
	}

	[Token(Token = "0x6002060")]
	[Address(RVA = "0x53A7550", Offset = "0x53A6550", VA = "0x53A7550")]
	[CLSCompliant(false)]
	public void AddValue(string name, ulong value)
	{
	}

	[Token(Token = "0x6002061")]
	[Address(RVA = "0x53A75D0", Offset = "0x53A65D0", VA = "0x53A75D0")]
	public void AddValue(string name, float value)
	{
	}

	[Token(Token = "0x6002062")]
	[Address(RVA = "0x53A7650", Offset = "0x53A6650", VA = "0x53A7650")]
	public void AddValue(string name, DateTime value)
	{
	}

	[Token(Token = "0x6002063")]
	[Address(RVA = "0x53A7080", Offset = "0x53A6080", VA = "0x53A7080")]
	internal void AddValueInternal(string name, object value, Type type)
	{
	}

	[Token(Token = "0x6002064")]
	[Address(RVA = "0x53A2AC0", Offset = "0x53A1AC0", VA = "0x53A2AC0")]
	internal void UpdateValue(string name, object value, Type type)
	{
	}

	[Token(Token = "0x6002065")]
	[Address(RVA = "0x53A76F0", Offset = "0x53A66F0", VA = "0x53A76F0")]
	private int FindElement(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002066")]
	[Address(RVA = "0x53A77B0", Offset = "0x53A67B0", VA = "0x53A77B0")]
	private object GetElement(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002067")]
	[Address(RVA = "0x53A78B0", Offset = "0x53A68B0", VA = "0x53A78B0")]
	[ComVisible(true)]
	private object GetElementNoThrow(string name, out Type foundType)
	{
		return null;
	}

	[Token(Token = "0x6002068")]
	[Address(RVA = "0x53A59D0", Offset = "0x53A49D0", VA = "0x53A59D0")]
	public object GetValue(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002069")]
	[Address(RVA = "0x53A58B0", Offset = "0x53A48B0", VA = "0x53A58B0")]
	[ComVisible(true)]
	internal object GetValueNoThrow(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x600206A")]
	[Address(RVA = "0x53A7930", Offset = "0x53A6930", VA = "0x53A7930")]
	public bool GetBoolean(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600206B")]
	[Address(RVA = "0x53A7A80", Offset = "0x53A6A80", VA = "0x53A7A80")]
	public int GetInt32(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600206C")]
	[Address(RVA = "0x53A7BD0", Offset = "0x53A6BD0", VA = "0x53A7BD0")]
	public long GetInt64(string name)
	{
		return default(long);
	}

	[Token(Token = "0x600206D")]
	[Address(RVA = "0x53A7D20", Offset = "0x53A6D20", VA = "0x53A7D20")]
	public float GetSingle(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600206E")]
	[Address(RVA = "0x53A7E70", Offset = "0x53A6E70", VA = "0x53A7E70")]
	public string GetString(string name)
	{
		return null;
	}
}
