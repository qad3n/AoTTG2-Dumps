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

[Token(Token = "0x2000301")]
[ComVisible(true)]
public abstract class MemberDescriptor
{
	[Token(Token = "0x4000E57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4000E58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string displayName;

	[Token(Token = "0x4000E59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int nameHash;

	[Token(Token = "0x4000E5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AttributeCollection attributeCollection;

	[Token(Token = "0x4000E5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Attribute[] attributes;

	[Token(Token = "0x4000E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Attribute[] originalAttributes;

	[Token(Token = "0x4000E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool attributesFiltered;

	[Token(Token = "0x4000E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool attributesFilled;

	[Token(Token = "0x4000E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int metadataVersion;

	[Token(Token = "0x4000E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string category;

	[Token(Token = "0x4000E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string description;

	[Token(Token = "0x4000E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object lockCookie;

	[Token(Token = "0x17000463")]
	protected virtual Attribute[] AttributeArray
	{
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x48B42D0", Offset = "0x48B42D0", VA = "0x48B42D0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x48B4DB0", Offset = "0x48B4DB0", VA = "0x48B4DB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000464")]
	public virtual AttributeCollection Attributes
	{
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x48B4EB0", Offset = "0x48B4EB0", VA = "0x48B4EB0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000465")]
	public virtual string Category
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x48B4FC0", Offset = "0x48B4FC0", VA = "0x48B4FC0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000466")]
	public virtual string Description
	{
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x48B5100", Offset = "0x48B5100", VA = "0x48B5100", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000467")]
	public virtual bool IsBrowsable
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x48B5230", Offset = "0x48B5230", VA = "0x48B5230", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000468")]
	public virtual string Name
	{
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x48B52F0", Offset = "0x48B52F0", VA = "0x48B52F0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000469")]
	protected virtual int NameHashCode
	{
		[Token(Token = "0x600136F")]
		[Address(RVA = "0x48B5330", Offset = "0x48B5330", VA = "0x48B5330", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700046A")]
	public virtual bool DesignTimeOnly
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x48B5340", Offset = "0x48B5340", VA = "0x48B5340", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700046B")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x48B5420", Offset = "0x48B5420", VA = "0x48B5420", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x48B42C0", Offset = "0x48B42C0", VA = "0x48B42C0")]
	protected MemberDescriptor(string name)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x48A1420", Offset = "0x48A1420", VA = "0x48A1420")]
	protected MemberDescriptor(string name, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x48A1640", Offset = "0x48A1640", VA = "0x48A1640")]
	protected MemberDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x48A17B0", Offset = "0x48A17B0", VA = "0x48A17B0")]
	protected MemberDescriptor(MemberDescriptor oldMemberDescriptor, Attribute[] newAttributes)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x48B42F0", Offset = "0x48B42F0", VA = "0x48B42F0")]
	private void CheckAttributesValid()
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x48B5530", Offset = "0x48B5530", VA = "0x48B5530", Slot = "14")]
	protected virtual AttributeCollection CreateAttributeCollection()
	{
		return null;
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x48B55A0", Offset = "0x48B55A0", VA = "0x48B55A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x48A29B0", Offset = "0x48A29B0", VA = "0x48A29B0", Slot = "15")]
	protected virtual void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x48B43C0", Offset = "0x48B43C0", VA = "0x48B43C0")]
	private void FilterAttributesIfNeeded()
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x48A9410", Offset = "0x48A9410", VA = "0x48A9410")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x48B57D0", Offset = "0x48B57D0", VA = "0x48B57D0")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType, bool publicOnly)
	{
		return null;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x48B5880", Offset = "0x48B5880", VA = "0x48B5880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x48A3150", Offset = "0x48A3150", VA = "0x48A3150", Slot = "16")]
	protected virtual object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x48A84D0", Offset = "0x48A84D0", VA = "0x48A84D0")]
	protected static ISite GetSite(object component)
	{
		return null;
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x48B5890", Offset = "0x48B5890", VA = "0x48B5890")]
	[Obsolete("This method has been deprecated. Use GetInvocationTarget instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected static object GetInvokee(Type componentClass, object component)
	{
		return null;
	}
}
