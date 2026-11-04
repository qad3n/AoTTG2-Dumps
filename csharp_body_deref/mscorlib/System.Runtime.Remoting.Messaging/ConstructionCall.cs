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
[Token(Token = "0x20003D4")]
[CLSCompliant(false)]
[ComVisible(true)]
public class ConstructionCall : MethodCall, IConstructionCallMessage, IMessage, IMethodCallMessage, IMethodMessage
{
	[Token(Token = "0x4000F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IActivator _activator;

	[Token(Token = "0x4000F74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object[] _activationAttributes;

	[Token(Token = "0x4000F75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IList _contextProperties;

	[Token(Token = "0x4000F76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Type _activationType;

	[Token(Token = "0x4000F77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private string _activationTypeName;

	[Token(Token = "0x4000F78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _isContextOk;

	[NonSerialized]
	[Token(Token = "0x4000F79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy;

	[Token(Token = "0x170003AC")]
	internal bool IsContextOk
	{
		[Token(Token = "0x6001EB2")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AD")]
	public Type ActivationType
	{
		[Token(Token = "0x6001EB4")]
		[Address(RVA = "0x19F5730", Offset = "0x19F3D30", VA = "0x1819F5730", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AE")]
	public string ActivationTypeName
	{
		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AF")]
	public IActivator Activator
	{
		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "26")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EB7")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x170003B0")]
	public object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001EB8")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	public IList ContextProperties
	{
		[Token(Token = "0x6001EBA")]
		[Address(RVA = "0x19F57F0", Offset = "0x19F3DF0", VA = "0x1819F57F0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B2")]
	public override IDictionary Properties
	{
		[Token(Token = "0x6001EBD")]
		[Address(RVA = "0x19F5860", Offset = "0x19F3E60", VA = "0x1819F5860", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B3")]
	internal System.Runtime.Remoting.Proxies.RemotingProxy SourceProxy
	{
		[Token(Token = "0x6001EBE")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EBF")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x6001EAF")]
	[Address(RVA = "0x19F56B0", Offset = "0x19F3CB0", VA = "0x1819F56B0")]
	internal ConstructionCall(Type type)
	{
	}

	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x19F5610", Offset = "0x19F3C10", VA = "0x1819F5610")]
	internal ConstructionCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x19F50D0", Offset = "0x19F36D0", VA = "0x1819F50D0", Slot = "22")]
	internal override void InitDictionary()
	{
	}

	[Token(Token = "0x6001EB9")]
	[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
	internal void SetActivationAttributes(object[] attributes)
	{
	}

	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x19F51E0", Offset = "0x19F37E0", VA = "0x1819F51E0", Slot = "19")]
	internal override void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x19F4FA0", Offset = "0x19F35A0", VA = "0x1819F4FA0", Slot = "20")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
