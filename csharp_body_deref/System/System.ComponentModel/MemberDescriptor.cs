// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MemberDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200020C")]
[ComVisible(true)]
public abstract class MemberDescriptor
{
	[Token(Token = "0x400078E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x400078F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string displayName;

	[Token(Token = "0x4000790")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int nameHash;

	[Token(Token = "0x4000791")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AttributeCollection attributeCollection;

	[Token(Token = "0x4000792")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Attribute[] attributes;

	[Token(Token = "0x4000793")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Attribute[] originalAttributes;

	[Token(Token = "0x4000794")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool attributesFiltered;

	[Token(Token = "0x4000795")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool attributesFilled;

	[Token(Token = "0x4000796")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int metadataVersion;

	[Token(Token = "0x4000797")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string category;

	[Token(Token = "0x4000798")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string description;

	[Token(Token = "0x4000799")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object lockCookie;

	[Token(Token = "0x170002D2")]
	protected virtual Attribute[] AttributeArray
	{
		[Token(Token = "0x6000DB0")]
		[Address(RVA = "0x28B5930", Offset = "0x28B3F30", VA = "0x1828B5930", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x28B6000", Offset = "0x28B4600", VA = "0x1828B6000", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D3")]
	public virtual AttributeCollection Attributes
	{
		[Token(Token = "0x6000DB2")]
		[Address(RVA = "0x28B5960", Offset = "0x28B3F60", VA = "0x1828B5960", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D4")]
	public virtual string Category
	{
		[Token(Token = "0x6000DB3")]
		[Address(RVA = "0x28B5A50", Offset = "0x28B4050", VA = "0x1828B5A50", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D5")]
	public virtual string Description
	{
		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x28B5BA0", Offset = "0x28B41A0", VA = "0x1828B5BA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D6")]
	public virtual bool IsBrowsable
	{
		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x28B5ED0", Offset = "0x28B44D0", VA = "0x1828B5ED0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D7")]
	public virtual string Name
	{
		[Token(Token = "0x6000DB6")]
		[Address(RVA = "0x28B5FB0", Offset = "0x28B45B0", VA = "0x1828B5FB0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	protected virtual int NameHashCode
	{
		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002D9")]
	public virtual bool DesignTimeOnly
	{
		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x28B5CC0", Offset = "0x28B42C0", VA = "0x1828B5CC0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DA")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6000DB9")]
		[Address(RVA = "0x28B5DB0", Offset = "0x28B43B0", VA = "0x1828B5DB0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x28B5270", Offset = "0x28B3870", VA = "0x1828B5270")]
	protected MemberDescriptor(string name)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x28B57D0", Offset = "0x28B3DD0", VA = "0x1828B57D0")]
	protected MemberDescriptor(string name, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x28B5280", Offset = "0x28B3880", VA = "0x1828B5280")]
	protected MemberDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x28B53F0", Offset = "0x28B39F0", VA = "0x1828B53F0")]
	protected MemberDescriptor(MemberDescriptor oldMemberDescriptor, Attribute[] newAttributes)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x28B4480", Offset = "0x28B2A80", VA = "0x1828B4480")]
	private void CheckAttributesValid()
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x28B4540", Offset = "0x28B2B40", VA = "0x1828B4540", Slot = "14")]
	protected virtual AttributeCollection CreateAttributeCollection()
	{
		return null;
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x28B45B0", Offset = "0x28B2BB0", VA = "0x1828B45B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x28B4830", Offset = "0x28B2E30", VA = "0x1828B4830", Slot = "15")]
	protected virtual void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x28B4940", Offset = "0x28B2F40", VA = "0x1828B4940")]
	private void FilterAttributesIfNeeded()
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x28B4EF0", Offset = "0x28B34F0", VA = "0x1828B4EF0")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x28B4E30", Offset = "0x28B3430", VA = "0x1828B4E30")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType, bool publicOnly)
	{
		return null;
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x28B4F80", Offset = "0x28B3580", VA = "0x1828B4F80", Slot = "16")]
	protected virtual object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x28B51C0", Offset = "0x28B37C0", VA = "0x1828B51C0")]
	protected static ISite GetSite(object component)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x28B50A0", Offset = "0x28B36A0", VA = "0x1828B50A0")]
	[Obsolete("This method has been deprecated. Use GetInvocationTarget instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected static object GetInvokee(Type componentClass, object component)
	{
		return null;
	}
}
