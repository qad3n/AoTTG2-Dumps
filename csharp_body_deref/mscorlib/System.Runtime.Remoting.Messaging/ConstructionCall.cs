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
[Token(Token = "0x20003AD")]
[CLSCompliant(false)]
[ComVisible(true)]
public class ConstructionCall : MethodCall, IConstructionCallMessage, IMessage, IMethodCallMessage, IMethodMessage
{
	[Token(Token = "0x4000ED3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IActivator _activator;

	[Token(Token = "0x4000ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object[] _activationAttributes;

	[Token(Token = "0x4000ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IList _contextProperties;

	[Token(Token = "0x4000ED6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Type _activationType;

	[Token(Token = "0x4000ED7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private string _activationTypeName;

	[Token(Token = "0x4000ED8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _isContextOk;

	[NonSerialized]
	[Token(Token = "0x4000ED9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy;

	[Token(Token = "0x170003AB")]
	internal bool IsContextOk
	{
		[Token(Token = "0x6001E88")]
		[Address(RVA = "0x5392780", Offset = "0x5391780", VA = "0x5392780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E89")]
		[Address(RVA = "0x5392790", Offset = "0x5391790", VA = "0x5392790")]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public Type ActivationType
	{
		[Token(Token = "0x6001E8A")]
		[Address(RVA = "0x53927A0", Offset = "0x53917A0", VA = "0x53927A0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public string ActivationTypeName
	{
		[Token(Token = "0x6001E8B")]
		[Address(RVA = "0x5392870", Offset = "0x5391870", VA = "0x5392870", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AE")]
	public IActivator Activator
	{
		[Token(Token = "0x6001E8C")]
		[Address(RVA = "0x5392880", Offset = "0x5391880", VA = "0x5392880", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E8D")]
		[Address(RVA = "0x5392890", Offset = "0x5391890", VA = "0x5392890", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003AF")]
	public object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001E8E")]
		[Address(RVA = "0x53928A0", Offset = "0x53918A0", VA = "0x53928A0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B0")]
	public IList ContextProperties
	{
		[Token(Token = "0x6001E90")]
		[Address(RVA = "0x53928C0", Offset = "0x53918C0", VA = "0x53928C0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001E93")]
		[Address(RVA = "0x5393720", Offset = "0x5392720", VA = "0x5393720", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B2")]
	internal System.Runtime.Remoting.Proxies.RemotingProxy SourceProxy
	{
		[Token(Token = "0x6001E94")]
		[Address(RVA = "0x5393780", Offset = "0x5392780", VA = "0x5393780")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E95")]
		[Address(RVA = "0x5393790", Offset = "0x5392790", VA = "0x5393790")]
		set
		{
		}
	}

	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x537BFB0", Offset = "0x537AFB0", VA = "0x537BFB0")]
	internal ConstructionCall(Type type)
	{
	}

	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x5392500", Offset = "0x5391500", VA = "0x5392500")]
	internal ConstructionCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x53925B0", Offset = "0x53915B0", VA = "0x53925B0", Slot = "22")]
	internal override void InitDictionary()
	{
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x53928B0", Offset = "0x53918B0", VA = "0x53928B0")]
	internal void SetActivationAttributes(object[] attributes)
	{
	}

	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x5392940", Offset = "0x5391940", VA = "0x5392940", Slot = "19")]
	internal override void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x5393110", Offset = "0x5392110", VA = "0x5393110", Slot = "20")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
