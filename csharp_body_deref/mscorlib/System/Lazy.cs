// ==================== AoTTG2 cross-reference ====================
// Type: System.Lazy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000E3")]
[DebuggerTypeProxy(typeof(System.LazyDebugView<>))]
[DebuggerDisplay("ThreadSafetyMode={Mode}, IsValueCreated={IsValueCreated}, IsValueFaulted={IsValueFaulted}, Value={ValueForDebugDisplay}")]
public class Lazy<T>
{
	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x0")]
	private System.LazyHelper _state;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> _factory;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x0")]
	private T _value;

	[Token(Token = "0x17000092")]
	public bool IsValueCreated
	{
		[Token(Token = "0x600083D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000093")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public T Value
	{
		[Token(Token = "0x600083E")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600082F")]
	private static T CreateViaDefaultConstructor()
	{
		return (T)null;
	}

	[Token(Token = "0x6000830")]
	public Lazy()
	{
	}

	[Token(Token = "0x6000831")]
	public Lazy(Func<T> valueFactory)
	{
	}

	[Token(Token = "0x6000832")]
	public Lazy(Func<T> valueFactory, bool isThreadSafe)
	{
	}

	[Token(Token = "0x6000833")]
	private Lazy(Func<T> valueFactory, LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
	}

	[Token(Token = "0x6000834")]
	private void ViaConstructor()
	{
	}

	[Token(Token = "0x6000835")]
	private void ViaFactory(LazyThreadSafetyMode mode)
	{
	}

	[Token(Token = "0x6000836")]
	private void ExecutionAndPublication(System.LazyHelper executionAndPublication, bool useDefaultConstructor)
	{
	}

	[Token(Token = "0x6000837")]
	private void PublicationOnly(System.LazyHelper publicationOnly, T possibleValue)
	{
	}

	[Token(Token = "0x6000838")]
	private void PublicationOnlyViaConstructor(System.LazyHelper initializer)
	{
	}

	[Token(Token = "0x6000839")]
	private void PublicationOnlyViaFactory(System.LazyHelper initializer)
	{
	}

	[Token(Token = "0x600083A")]
	private void PublicationOnlyWaitForOtherThreadToPublish()
	{
	}

	[Token(Token = "0x600083B")]
	private T CreateValue()
	{
		return (T)null;
	}

	[Token(Token = "0x600083C")]
	public override string ToString()
	{
		return null;
	}
}
