// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ConstructionCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Activation;
using System.Runtime.Remoting.Proxies;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A5")]
[ComVisible(true)]
[CLSCompliant(false)]
public class ConstructionCall : MethodCall, IConstructionCallMessage, IMessage, IMethodCallMessage, IMethodMessage
{
	[Token(Token = "0x4000F69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IActivator _activator;

	[Token(Token = "0x4000F6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object[] _activationAttributes;

	[Token(Token = "0x4000F6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IList _contextProperties;

	[Token(Token = "0x4000F6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Type _activationType;

	[Token(Token = "0x4000F6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private string _activationTypeName;

	[Token(Token = "0x4000F6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _isContextOk;

	[NonSerialized]
	[Token(Token = "0x4000F6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy;

	[Token(Token = "0x170003AA")]
	internal bool IsContextOk
	{
		[Token(Token = "0x6001E43")]
		[Address(RVA = "0x3B8AA30", Offset = "0x3B8AA30", VA = "0x3B8AA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E44")]
		[Address(RVA = "0x3B8AA40", Offset = "0x3B8AA40", VA = "0x3B8AA40")]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	public Type ActivationType
	{
		[Token(Token = "0x6001E45")]
		[Address(RVA = "0x3B8AA50", Offset = "0x3B8AA50", VA = "0x3B8AA50", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AC")]
	public string ActivationTypeName
	{
		[Token(Token = "0x6001E46")]
		[Address(RVA = "0x3B8AB20", Offset = "0x3B8AB20", VA = "0x3B8AB20", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public IActivator Activator
	{
		[Token(Token = "0x6001E47")]
		[Address(RVA = "0x3B8AB30", Offset = "0x3B8AB30", VA = "0x3B8AB30", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E48")]
		[Address(RVA = "0x3B8AB40", Offset = "0x3B8AB40", VA = "0x3B8AB40", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001E49")]
		[Address(RVA = "0x3B8AB50", Offset = "0x3B8AB50", VA = "0x3B8AB50", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AF")]
	public IList ContextProperties
	{
		[Token(Token = "0x6001E4B")]
		[Address(RVA = "0x3B8AB70", Offset = "0x3B8AB70", VA = "0x3B8AB70", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B0")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001E4E")]
		[Address(RVA = "0x3B8BA40", Offset = "0x3B8BA40", VA = "0x3B8BA40", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	internal System.Runtime.Remoting.Proxies.RemotingProxy SourceProxy
	{
		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0x3B8BAA0", Offset = "0x3B8BAA0", VA = "0x3B8BAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E50")]
		[Address(RVA = "0x3B8BAB0", Offset = "0x3B8BAB0", VA = "0x3B8BAB0")]
		set
		{
		}
	}

	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x3B736A0", Offset = "0x3B736A0", VA = "0x3B736A0")]
	internal ConstructionCall(Type type)
	{
	}

	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x3B8A7B0", Offset = "0x3B8A7B0", VA = "0x3B8A7B0")]
	internal ConstructionCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x3B8A860", Offset = "0x3B8A860", VA = "0x3B8A860", Slot = "22")]
	internal override void InitDictionary()
	{
	}

	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x3B8AB60", Offset = "0x3B8AB60", VA = "0x3B8AB60")]
	internal void SetActivationAttributes(object[] attributes)
	{
	}

	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x3B8ABF0", Offset = "0x3B8ABF0", VA = "0x3B8ABF0", Slot = "19")]
	internal override void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x3B8B3C0", Offset = "0x3B8B3C0", VA = "0x3B8B3C0", Slot = "20")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
