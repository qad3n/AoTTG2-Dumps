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
		[Address(RVA = "0x3DD7E40", Offset = "0x3DD7E40", VA = "0x3DD7E40")]
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
		[Address(RVA = "0x3DD7E50", Offset = "0x3DD7E50", VA = "0x3DD7E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x3DD6EA0", Offset = "0x3DD6EA0", VA = "0x3DD6EA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public bool? IsReference
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x3DD7E60", Offset = "0x3DD7E60", VA = "0x3DD7E60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x3DD7E70", Offset = "0x3DD7E70", VA = "0x3DD7E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x3DD7E80", Offset = "0x3DD7E80", VA = "0x3DD7E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x3DD7E90", Offset = "0x3DD7E90", VA = "0x3DD7E90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public JsonConverter? InternalConverter
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x3DD7EA0", Offset = "0x3DD7EA0", VA = "0x3DD7EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x3DD7EB0", Offset = "0x3DD7EB0", VA = "0x3DD7EB0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public IList<SerializationCallback> OnDeserializedCallbacks
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x3DCF070", Offset = "0x3DCF070", VA = "0x3DCF070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public IList<SerializationCallback> OnDeserializingCallbacks
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x3DCEFE0", Offset = "0x3DCEFE0", VA = "0x3DCEFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public IList<SerializationCallback> OnSerializedCallbacks
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x3DCEF50", Offset = "0x3DCEF50", VA = "0x3DCEF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	public IList<SerializationCallback> OnSerializingCallbacks
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x3DCC050", Offset = "0x3DCC050", VA = "0x3DCC050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public IList<SerializationErrorCallback> OnErrorCallbacks
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x3DCF100", Offset = "0x3DCF100", VA = "0x3DCF100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public Func<object>? DefaultCreator
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x3DD7EC0", Offset = "0x3DD7EC0", VA = "0x3DD7EC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x3DD7ED0", Offset = "0x3DD7ED0", VA = "0x3DD7ED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public bool DefaultCreatorNonPublic
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x3DD7EE0", Offset = "0x3DD7EE0", VA = "0x3DD7EE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x3DD7EF0", Offset = "0x3DD7EF0", VA = "0x3DD7EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x3DD7970", Offset = "0x3DD7970", VA = "0x3DD7970")]
	internal JsonContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x3DD7F00", Offset = "0x3DD7F00", VA = "0x3DD7F00")]
	internal void InvokeOnSerializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x3DD8070", Offset = "0x3DD8070", VA = "0x3DD8070")]
	internal void InvokeOnSerialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x3DD81E0", Offset = "0x3DD81E0", VA = "0x3DD81E0")]
	internal void InvokeOnDeserializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x3DD8350", Offset = "0x3DD8350", VA = "0x3DD8350")]
	internal void InvokeOnDeserialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x3DD84C0", Offset = "0x3DD84C0", VA = "0x3DD84C0")]
	internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x3DCFA40", Offset = "0x3DCFA40", VA = "0x3DCFA40")]
	internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x3DCFAF0", Offset = "0x3DCFAF0", VA = "0x3DCFAF0")]
	internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}
}
