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
		[Address(RVA = "0x4EA4F10", Offset = "0x4EA4F10", VA = "0x4EA4F10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E44")]
		[Address(RVA = "0x4EA4F20", Offset = "0x4EA4F20", VA = "0x4EA4F20")]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	public Type ActivationType
	{
		[Token(Token = "0x6001E45")]
		[Address(RVA = "0x4EA4F30", Offset = "0x4EA4F30", VA = "0x4EA4F30", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AC")]
	public string ActivationTypeName
	{
		[Token(Token = "0x6001E46")]
		[Address(RVA = "0x4EA5000", Offset = "0x4EA5000", VA = "0x4EA5000", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public IActivator Activator
	{
		[Token(Token = "0x6001E47")]
		[Address(RVA = "0x4EA5010", Offset = "0x4EA5010", VA = "0x4EA5010", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E48")]
		[Address(RVA = "0x4EA5020", Offset = "0x4EA5020", VA = "0x4EA5020", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001E49")]
		[Address(RVA = "0x4EA5030", Offset = "0x4EA5030", VA = "0x4EA5030", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AF")]
	public IList ContextProperties
	{
		[Token(Token = "0x6001E4B")]
		[Address(RVA = "0x4EA5050", Offset = "0x4EA5050", VA = "0x4EA5050", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B0")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001E4E")]
		[Address(RVA = "0x4EA5F20", Offset = "0x4EA5F20", VA = "0x4EA5F20", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	internal System.Runtime.Remoting.Proxies.RemotingProxy SourceProxy
	{
		[Token(Token = "0x6001E4F")]
		[Address(RVA = "0x4EA5F80", Offset = "0x4EA5F80", VA = "0x4EA5F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E50")]
		[Address(RVA = "0x4EA5F90", Offset = "0x4EA5F90", VA = "0x4EA5F90")]
		set
		{
		}
	}

	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x4E8DB80", Offset = "0x4E8DB80", VA = "0x4E8DB80")]
	internal ConstructionCall(Type type)
	{
	}

	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x4EA4C90", Offset = "0x4EA4C90", VA = "0x4EA4C90")]
	internal ConstructionCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x4EA4D40", Offset = "0x4EA4D40", VA = "0x4EA4D40", Slot = "22")]
	internal override void InitDictionary()
	{
	}

	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x4EA5040", Offset = "0x4EA5040", VA = "0x4EA5040")]
	internal void SetActivationAttributes(object[] attributes)
	{
	}

	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x4EA50D0", Offset = "0x4EA50D0", VA = "0x4EA50D0", Slot = "19")]
	internal override void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x4EA58A0", Offset = "0x4EA58A0", VA = "0x4EA58A0", Slot = "20")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
