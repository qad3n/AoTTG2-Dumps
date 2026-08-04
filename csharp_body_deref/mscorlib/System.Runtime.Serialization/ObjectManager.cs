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

[Token(Token = "0x20003DF")]
[ComVisible(true)]
public class ObjectManager
{
	[Token(Token = "0x4000FEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler;

	[Token(Token = "0x4000FED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private SerializationEventHandler m_onDeserializedHandler;

	[Token(Token = "0x4000FEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.ObjectHolder[] m_objects;

	[Token(Token = "0x4000FEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal object m_topObject;

	[Token(Token = "0x4000FF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects;

	[Token(Token = "0x4000FF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal long m_fixupCount;

	[Token(Token = "0x4000FF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal ISurrogateSelector m_selector;

	[Token(Token = "0x4000FF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal StreamingContext m_context;

	[Token(Token = "0x1700041C")]
	internal object TopObject
	{
		[Token(Token = "0x6001F87")]
		[Address(RVA = "0x3B98EF0", Offset = "0x3B98EF0", VA = "0x3B98EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F86")]
		[Address(RVA = "0x3B98EE0", Offset = "0x3B98EE0", VA = "0x3B98EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700041D")]
	internal System.Runtime.Serialization.ObjectHolderList SpecialFixupObjects
	{
		[Token(Token = "0x6001F88")]
		[Address(RVA = "0x3B98F00", Offset = "0x3B98F00", VA = "0x3B98F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x3B98E40", Offset = "0x3B98E40", VA = "0x3B98E40")]
	internal ObjectManager(ISurrogateSelector selector, StreamingContext context, bool checkSecurity, bool isCrossAppDomain)
	{
	}

	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x3B98ED0", Offset = "0x3B98ED0", VA = "0x3B98ED0")]
	private bool CanCallGetType(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x3B99030", Offset = "0x3B99030", VA = "0x3B99030")]
	internal System.Runtime.Serialization.ObjectHolder FindObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x3B99080", Offset = "0x3B99080", VA = "0x3B99080")]
	internal System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x3B99160", Offset = "0x3B99160", VA = "0x3B99160")]
	private void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x3B99290", Offset = "0x3B99290", VA = "0x3B99290")]
	private bool GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out object member, bool bThrowIfMissing)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x3B996B0", Offset = "0x3B996B0", VA = "0x3B996B0")]
	private void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x3B9A920", Offset = "0x3B9A920", VA = "0x3B9A920")]
	private bool ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x3B99EB0", Offset = "0x3B99EB0", VA = "0x3B99EB0")]
	private bool DoValueTypeFixup(FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x3B9AC30", Offset = "0x3B9AC30", VA = "0x3B9AC30")]
	internal void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, bool bObjectFullyComplete)
	{
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x3B9A5C0", Offset = "0x3B9A5C0", VA = "0x3B9A5C0")]
	private void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x3B9B8A0", Offset = "0x3B9B8A0", VA = "0x3B9B8A0", Slot = "4")]
	public virtual object GetObject(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x3B9BA10", Offset = "0x3B9BA10", VA = "0x3B9BA10")]
	internal void RegisterString(string obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member)
	{
	}

	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x3B9BC00", Offset = "0x3B9BC00", VA = "0x3B9BC00")]
	public void RegisterObject(object obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x3B99BD0", Offset = "0x3B99BD0", VA = "0x3B99BD0")]
	internal void CompleteISerializableObject(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x3B9C6C0", Offset = "0x3B9C6C0", VA = "0x3B9C6C0")]
	internal static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
	{
		return null;
	}

	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x3B9C7E0", Offset = "0x3B9C7E0", VA = "0x3B9C7E0", Slot = "5")]
	public virtual void DoFixups()
	{
	}

	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x3B9CD40", Offset = "0x3B9CD40", VA = "0x3B9CD40")]
	private void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, long objectToBeFixed, long objectRequired)
	{
	}

	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x3B9D050", Offset = "0x3B9D050", VA = "0x3B9D050", Slot = "6")]
	public virtual void RecordFixup(long objectToBeFixed, MemberInfo member, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x3B9D300", Offset = "0x3B9D300", VA = "0x3B9D300", Slot = "7")]
	public virtual void RecordDelayedFixup(long objectToBeFixed, string memberName, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x3B9D440", Offset = "0x3B9D440", VA = "0x3B9D440", Slot = "8")]
	public virtual void RecordArrayElementFixup(long arrayToBeFixed, int[] indices, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x3B9D580", Offset = "0x3B9D580", VA = "0x3B9D580", Slot = "9")]
	public virtual void RaiseDeserializationEvent()
	{
	}

	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x3B9D5C0", Offset = "0x3B9D5C0", VA = "0x3B9D5C0", Slot = "10")]
	internal virtual void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
	{
	}

	[Token(Token = "0x6001F9E")]
	[Address(RVA = "0x3B9D640", Offset = "0x3B9D640", VA = "0x3B9D640", Slot = "11")]
	internal virtual void AddOnDeserialized(object obj)
	{
	}

	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x3B9D6D0", Offset = "0x3B9D6D0", VA = "0x3B9D6D0", Slot = "12")]
	internal virtual void RaiseOnDeserializedEvent(object obj)
	{
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x3B9D750", Offset = "0x3B9D750", VA = "0x3B9D750")]
	public void RaiseOnDeserializingEvent(object obj)
	{
	}
}
