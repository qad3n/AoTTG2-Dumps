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

[Token(Token = "0x20001CD")]
[ComVisible(true)]
public abstract class MemberDescriptor
{
	[Token(Token = "0x40006BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x40006C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string displayName;

	[Token(Token = "0x40006C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int nameHash;

	[Token(Token = "0x40006C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AttributeCollection attributeCollection;

	[Token(Token = "0x40006C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Attribute[] attributes;

	[Token(Token = "0x40006C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Attribute[] originalAttributes;

	[Token(Token = "0x40006C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool attributesFiltered;

	[Token(Token = "0x40006C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool attributesFilled;

	[Token(Token = "0x40006C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int metadataVersion;

	[Token(Token = "0x40006C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string category;

	[Token(Token = "0x40006C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string description;

	[Token(Token = "0x40006CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object lockCookie;

	[Token(Token = "0x170002A3")]
	protected virtual Attribute[] AttributeArray
	{
		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x62533B0", Offset = "0x62523B0", VA = "0x62533B0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x6253C60", Offset = "0x6252C60", VA = "0x6253C60", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002A4")]
	public virtual AttributeCollection Attributes
	{
		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x6253D50", Offset = "0x6252D50", VA = "0x6253D50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A5")]
	public virtual string Category
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x6253E40", Offset = "0x6252E40", VA = "0x6253E40", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public virtual string Description
	{
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x6253F80", Offset = "0x6252F80", VA = "0x6253F80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public virtual bool IsBrowsable
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x6254090", Offset = "0x6253090", VA = "0x6254090", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A8")]
	public virtual string Name
	{
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x6254150", Offset = "0x6253150", VA = "0x6254150", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	protected virtual int NameHashCode
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x6254190", Offset = "0x6253190", VA = "0x6254190", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AA")]
	public virtual bool DesignTimeOnly
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x62541A0", Offset = "0x62531A0", VA = "0x62541A0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AB")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x6254280", Offset = "0x6253280", VA = "0x6254280", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x62533A0", Offset = "0x62523A0", VA = "0x62533A0")]
	protected MemberDescriptor(string name)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x6240F30", Offset = "0x623FF30", VA = "0x6240F30")]
	protected MemberDescriptor(string name, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x6241110", Offset = "0x6240110", VA = "0x6241110")]
	protected MemberDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x6241280", Offset = "0x6240280", VA = "0x6241280")]
	protected MemberDescriptor(MemberDescriptor oldMemberDescriptor, Attribute[] newAttributes)
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x62533D0", Offset = "0x62523D0", VA = "0x62533D0")]
	private void CheckAttributesValid()
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x6254390", Offset = "0x6253390", VA = "0x6254390", Slot = "14")]
	protected virtual AttributeCollection CreateAttributeCollection()
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x6254400", Offset = "0x6253400", VA = "0x6254400", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x62422D0", Offset = "0x62412D0", VA = "0x62422D0", Slot = "15")]
	protected virtual void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x62534A0", Offset = "0x62524A0", VA = "0x62534A0")]
	private void FilterAttributesIfNeeded()
	{
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x6248940", Offset = "0x6247940", VA = "0x6248940")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x6254630", Offset = "0x6253630", VA = "0x6254630")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType, bool publicOnly)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x62546E0", Offset = "0x62536E0", VA = "0x62546E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x6242A60", Offset = "0x6241A60", VA = "0x6242A60", Slot = "16")]
	protected virtual object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x6247BC0", Offset = "0x6246BC0", VA = "0x6247BC0")]
	protected static ISite GetSite(object component)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x62546F0", Offset = "0x62536F0", VA = "0x62546F0")]
	[Obsolete("This method has been deprecated. Use GetInvocationTarget instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected static object GetInvokee(Type componentClass, object component)
	{
		return null;
	}
}
