// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsObject
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000079")]
internal abstract class MonoBtlsObject : IDisposable
{
	[Token(Token = "0x200007A")]
	protected internal abstract class MonoBtlsHandle : SafeHandle
	{
		[Token(Token = "0x1700005E")]
		public override bool IsInvalid
		{
			[Token(Token = "0x60001E5")]
			[Address(RVA = "0x2498690", Offset = "0x2496C90", VA = "0x182498690", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x2498680", Offset = "0x2496C80", VA = "0x182498680")]
		internal MonoBtlsHandle(IntPtr handle, bool ownsHandle)
		{
		}
	}

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private MonoBtlsHandle handle;

	[Token(Token = "0x400014A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Exception lastError;

	[Token(Token = "0x1700005C")]
	internal MonoBtlsHandle Handle
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x2499560", Offset = "0x2497B60", VA = "0x182499560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public bool IsValid
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x2499580", Offset = "0x2497B80", VA = "0x182499580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal MonoBtlsObject(MonoBtlsHandle handle)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x2499270", Offset = "0x2497870", VA = "0x182499270")]
	protected void CheckThrow()
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x2499530", Offset = "0x2497B30", VA = "0x182499530")]
	protected Exception SetException(Exception ex)
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x2498ED0", Offset = "0x24974D0", VA = "0x182498ED0")]
	protected void CheckError(bool ok, [Optional][CallerMemberName] string callerName)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x2499060", Offset = "0x2497660", VA = "0x182499060")]
	protected void CheckError(int ret, [Optional][CallerMemberName] string callerName)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x2499070", Offset = "0x2497670", VA = "0x182499070")]
	protected internal void CheckLastError([Optional][CallerMemberName] string callerName)
	{
	}

	[PreserveSig]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x24995B0", Offset = "0x2497BB0", VA = "0x1824995B0")]
	private static extern void mono_btls_free(IntPtr data);

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x24994B0", Offset = "0x2497AB0", VA = "0x1824994B0")]
	protected void FreeDataPtr(IntPtr data)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Close()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x2499310", Offset = "0x2497910", VA = "0x182499310")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x24993F0", Offset = "0x24979F0", VA = "0x1824993F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x2499450", Offset = "0x2497A50", VA = "0x182499450", Slot = "1")]
	~MonoBtlsObject()
	{
	}
}
