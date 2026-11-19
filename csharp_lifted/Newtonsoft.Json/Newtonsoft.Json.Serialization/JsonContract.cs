// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonContract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000119")]
public abstract class JsonContract
{
	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x10")]
	internal bool IsNullable;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x11")]
	internal bool IsConvertable;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x12")]
	internal bool IsEnum;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x18")]
	internal Type NonNullableUnderlyingType;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0x20")]
	internal ReadType InternalReadType;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x24")]
	internal JsonContractType ContractType;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x28")]
	internal bool IsReadOnlyOrFixedSize;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x29")]
	internal bool IsSealed;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x2A")]
	internal bool IsInstantiable;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x30")]
	private List<SerializationCallback>? _onDeserializedCallbacks;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x38")]
	private List<SerializationCallback>? _onDeserializingCallbacks;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x40")]
	private List<SerializationCallback>? _onSerializedCallbacks;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x48")]
	private List<SerializationCallback>? _onSerializingCallbacks;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x50")]
	private List<SerializationErrorCallback>? _onErrorCallbacks;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x58")]
	private Type _createdType;

	[Token(Token = "0x17000108")]
	public Type UnderlyingType
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x55D0590", Offset = "0x55CF590", VA = "0x55D0590")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	public Type CreatedType
	{
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x55D05A0", Offset = "0x55CF5A0", VA = "0x55D05A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x55CF620", Offset = "0x55CE620", VA = "0x55CF620")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public bool? IsReference
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x55D05B0", Offset = "0x55CF5B0", VA = "0x55D05B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x55D05C0", Offset = "0x55CF5C0", VA = "0x55D05C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x55D05D0", Offset = "0x55CF5D0", VA = "0x55D05D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x55D05E0", Offset = "0x55CF5E0", VA = "0x55D05E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public JsonConverter? InternalConverter
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x55D05F0", Offset = "0x55CF5F0", VA = "0x55D05F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x55D0600", Offset = "0x55CF600", VA = "0x55D0600")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public IList<SerializationCallback> OnDeserializedCallbacks
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x55C7990", Offset = "0x55C6990", VA = "0x55C7990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public IList<SerializationCallback> OnDeserializingCallbacks
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x55C7900", Offset = "0x55C6900", VA = "0x55C7900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public IList<SerializationCallback> OnSerializedCallbacks
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x55C7870", Offset = "0x55C6870", VA = "0x55C7870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	public IList<SerializationCallback> OnSerializingCallbacks
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x55C4A20", Offset = "0x55C3A20", VA = "0x55C4A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public IList<SerializationErrorCallback> OnErrorCallbacks
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x55C7A20", Offset = "0x55C6A20", VA = "0x55C7A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public Func<object>? DefaultCreator
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x55D0610", Offset = "0x55CF610", VA = "0x55D0610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x55D0620", Offset = "0x55CF620", VA = "0x55D0620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public bool DefaultCreatorNonPublic
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x55D0630", Offset = "0x55CF630", VA = "0x55D0630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x55D0640", Offset = "0x55CF640", VA = "0x55D0640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x55D00D0", Offset = "0x55CF0D0", VA = "0x55D00D0")]
	internal JsonContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x55D0650", Offset = "0x55CF650", VA = "0x55D0650")]
	internal void InvokeOnSerializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x55D07B0", Offset = "0x55CF7B0", VA = "0x55D07B0")]
	internal void InvokeOnSerialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x55D0910", Offset = "0x55CF910", VA = "0x55D0910")]
	internal void InvokeOnDeserializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x55D0A70", Offset = "0x55CFA70", VA = "0x55D0A70")]
	internal void InvokeOnDeserialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x55D0BD0", Offset = "0x55CFBD0", VA = "0x55D0BD0")]
	internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x55C8340", Offset = "0x55C7340", VA = "0x55C8340")]
	internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x55C83F0", Offset = "0x55C73F0", VA = "0x55C83F0")]
	internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}
}
