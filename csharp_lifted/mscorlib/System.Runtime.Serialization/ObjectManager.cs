// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E7")]
[ComVisible(true)]
public class ObjectManager
{
	[Token(Token = "0x4000F52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler;

	[Token(Token = "0x4000F53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private SerializationEventHandler m_onDeserializedHandler;

	[Token(Token = "0x4000F54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.ObjectHolder[] m_objects;

	[Token(Token = "0x4000F55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal object m_topObject;

	[Token(Token = "0x4000F56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects;

	[Token(Token = "0x4000F57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal long m_fixupCount;

	[Token(Token = "0x4000F58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal ISurrogateSelector m_selector;

	[Token(Token = "0x4000F59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal StreamingContext m_context;

	[Token(Token = "0x1700041D")]
	internal object TopObject
	{
		[Token(Token = "0x6001FCC")]
		[Address(RVA = "0x53A0490", Offset = "0x539F490", VA = "0x53A0490")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FCB")]
		[Address(RVA = "0x53A0480", Offset = "0x539F480", VA = "0x53A0480")]
		set
		{
		}
	}

	[Token(Token = "0x1700041E")]
	internal System.Runtime.Serialization.ObjectHolderList SpecialFixupObjects
	{
		[Token(Token = "0x6001FCD")]
		[Address(RVA = "0x53A04A0", Offset = "0x539F4A0", VA = "0x53A04A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x53A03E0", Offset = "0x539F3E0", VA = "0x53A03E0")]
	internal ObjectManager(ISurrogateSelector selector, StreamingContext context, bool checkSecurity, bool isCrossAppDomain)
	{
	}

	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x53A0470", Offset = "0x539F470", VA = "0x53A0470")]
	private bool CanCallGetType(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x53A05D0", Offset = "0x539F5D0", VA = "0x53A05D0")]
	internal System.Runtime.Serialization.ObjectHolder FindObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x53A0620", Offset = "0x539F620", VA = "0x53A0620")]
	internal System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x53A0700", Offset = "0x539F700", VA = "0x53A0700")]
	private void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x53A0840", Offset = "0x539F840", VA = "0x53A0840")]
	private bool GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out object member, bool bThrowIfMissing)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x53A0C70", Offset = "0x539FC70", VA = "0x53A0C70")]
	private void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x53A1F40", Offset = "0x53A0F40", VA = "0x53A1F40")]
	private bool ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x53A1470", Offset = "0x53A0470", VA = "0x53A1470")]
	private bool DoValueTypeFixup(FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x53A2300", Offset = "0x53A1300", VA = "0x53A2300")]
	internal void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, bool bObjectFullyComplete)
	{
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x53A1BA0", Offset = "0x53A0BA0", VA = "0x53A1BA0")]
	private void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x53A2D80", Offset = "0x53A1D80", VA = "0x53A2D80", Slot = "4")]
	public virtual object GetObject(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x53A2EF0", Offset = "0x53A1EF0", VA = "0x53A2EF0")]
	internal void RegisterString(string obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member)
	{
	}

	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x53A30E0", Offset = "0x53A20E0", VA = "0x53A30E0")]
	public void RegisterObject(object obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x53A1190", Offset = "0x53A0190", VA = "0x53A1190")]
	internal void CompleteISerializableObject(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x53A3B90", Offset = "0x53A2B90", VA = "0x53A3B90")]
	internal static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
	{
		return null;
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x53A3CB0", Offset = "0x53A2CB0", VA = "0x53A3CB0", Slot = "5")]
	public virtual void DoFixups()
	{
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x53A42B0", Offset = "0x53A32B0", VA = "0x53A42B0")]
	private void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, long objectToBeFixed, long objectRequired)
	{
	}

	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x53A4580", Offset = "0x53A3580", VA = "0x53A4580", Slot = "6")]
	public virtual void RecordFixup(long objectToBeFixed, MemberInfo member, long objectRequired)
	{
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x53A4820", Offset = "0x53A3820", VA = "0x53A4820", Slot = "7")]
	public virtual void RecordDelayedFixup(long objectToBeFixed, string memberName, long objectRequired)
	{
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x53A4960", Offset = "0x53A3960", VA = "0x53A4960", Slot = "8")]
	public virtual void RecordArrayElementFixup(long arrayToBeFixed, int[] indices, long objectRequired)
	{
	}

	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x53A4AA0", Offset = "0x53A3AA0", VA = "0x53A4AA0", Slot = "9")]
	public virtual void RaiseDeserializationEvent()
	{
	}

	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x53A4AE0", Offset = "0x53A3AE0", VA = "0x53A4AE0", Slot = "10")]
	internal virtual void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
	{
	}

	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x53A4B60", Offset = "0x53A3B60", VA = "0x53A4B60", Slot = "11")]
	internal virtual void AddOnDeserialized(object obj)
	{
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x53A4C00", Offset = "0x53A3C00", VA = "0x53A4C00", Slot = "12")]
	internal virtual void RaiseOnDeserializedEvent(object obj)
	{
	}

	[Token(Token = "0x6001FE5")]
	[Address(RVA = "0x53A4C80", Offset = "0x53A3C80", VA = "0x53A4C80")]
	public void RaiseOnDeserializingEvent(object obj)
	{
	}
}
