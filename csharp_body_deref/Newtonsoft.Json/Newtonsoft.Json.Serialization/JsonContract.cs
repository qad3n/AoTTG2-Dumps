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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
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
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x1C40920", Offset = "0x1C3EF20", VA = "0x181C40920")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public bool? IsReference
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x1C40690", Offset = "0x1C3EC90", VA = "0x181C40690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x1C40A20", Offset = "0x1C3F020", VA = "0x181C40A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public JsonConverter? InternalConverter
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public IList<SerializationCallback> OnDeserializedCallbacks
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x1C406A0", Offset = "0x1C3ECA0", VA = "0x181C406A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public IList<SerializationCallback> OnDeserializingCallbacks
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x1C40720", Offset = "0x1C3ED20", VA = "0x181C40720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public IList<SerializationCallback> OnSerializedCallbacks
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x1C40820", Offset = "0x1C3EE20", VA = "0x181C40820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	public IList<SerializationCallback> OnSerializingCallbacks
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x1C408A0", Offset = "0x1C3EEA0", VA = "0x181C408A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public IList<SerializationErrorCallback> OnErrorCallbacks
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x1C407A0", Offset = "0x1C3EDA0", VA = "0x181C407A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public Func<object>? DefaultCreator
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public bool DefaultCreatorNonPublic
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x1C40A10", Offset = "0x1C3F010", VA = "0x181C40A10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x1C404E0", Offset = "0x1C3EAE0", VA = "0x181C404E0")]
	internal JsonContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x1C403A0", Offset = "0x1C3E9A0", VA = "0x181C403A0")]
	internal void InvokeOnSerializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x1C40260", Offset = "0x1C3E860", VA = "0x181C40260")]
	internal void InvokeOnSerialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x1C3FFD0", Offset = "0x1C3E5D0", VA = "0x181C3FFD0")]
	internal void InvokeOnDeserializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x1C3FE90", Offset = "0x1C3E490", VA = "0x181C3FE90")]
	internal void InvokeOnDeserialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x1C40110", Offset = "0x1C3E710", VA = "0x181C40110")]
	internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x1C3FC80", Offset = "0x1C3E280", VA = "0x181C3FC80")]
	internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x1C3FD30", Offset = "0x1C3E330", VA = "0x181C3FD30")]
	internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}
}
