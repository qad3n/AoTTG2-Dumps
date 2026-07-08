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
		[Address(RVA = "0x3AE24F0", Offset = "0x3AE24F0", VA = "0x3AE24F0")]
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
		[Address(RVA = "0x3AE2500", Offset = "0x3AE2500", VA = "0x3AE2500")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x3AE1550", Offset = "0x3AE1550", VA = "0x3AE1550")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public bool? IsReference
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x3AE2510", Offset = "0x3AE2510", VA = "0x3AE2510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x3AE2520", Offset = "0x3AE2520", VA = "0x3AE2520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public JsonConverter? Converter
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x3AE2530", Offset = "0x3AE2530", VA = "0x3AE2530")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x3AE2540", Offset = "0x3AE2540", VA = "0x3AE2540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public JsonConverter? InternalConverter
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x3AE2550", Offset = "0x3AE2550", VA = "0x3AE2550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x3AE2560", Offset = "0x3AE2560", VA = "0x3AE2560")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public IList<SerializationCallback> OnDeserializedCallbacks
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x3AD9720", Offset = "0x3AD9720", VA = "0x3AD9720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public IList<SerializationCallback> OnDeserializingCallbacks
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x3AD9690", Offset = "0x3AD9690", VA = "0x3AD9690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public IList<SerializationCallback> OnSerializedCallbacks
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x3AD9600", Offset = "0x3AD9600", VA = "0x3AD9600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	public IList<SerializationCallback> OnSerializingCallbacks
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x3AD6700", Offset = "0x3AD6700", VA = "0x3AD6700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public IList<SerializationErrorCallback> OnErrorCallbacks
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x3AD97B0", Offset = "0x3AD97B0", VA = "0x3AD97B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public Func<object>? DefaultCreator
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x3AE2570", Offset = "0x3AE2570", VA = "0x3AE2570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x3AE2580", Offset = "0x3AE2580", VA = "0x3AE2580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public bool DefaultCreatorNonPublic
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x3AE2590", Offset = "0x3AE2590", VA = "0x3AE2590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x3AE25A0", Offset = "0x3AE25A0", VA = "0x3AE25A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x3AE2020", Offset = "0x3AE2020", VA = "0x3AE2020")]
	internal JsonContract(Type underlyingType)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x3AE25B0", Offset = "0x3AE25B0", VA = "0x3AE25B0")]
	internal void InvokeOnSerializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x3AE2720", Offset = "0x3AE2720", VA = "0x3AE2720")]
	internal void InvokeOnSerialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x3AE2890", Offset = "0x3AE2890", VA = "0x3AE2890")]
	internal void InvokeOnDeserializing(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x3AE2A00", Offset = "0x3AE2A00", VA = "0x3AE2A00")]
	internal void InvokeOnDeserialized(object o, StreamingContext context)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x3AE2B70", Offset = "0x3AE2B70", VA = "0x3AE2B70")]
	internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x3ADA0F0", Offset = "0x3ADA0F0", VA = "0x3ADA0F0")]
	internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x3ADA1A0", Offset = "0x3ADA1A0", VA = "0x3ADA1A0")]
	internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo)
	{
		return null;
	}
}
