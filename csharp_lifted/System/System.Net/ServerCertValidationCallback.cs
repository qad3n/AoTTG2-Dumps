// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ServerCertValidationCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002CE")]
internal class ServerCertValidationCallback
{
	[Token(Token = "0x20002CF")]
	private class CallbackContext
	{
		[Token(Token = "0x4000AEB")]
		[FieldOffset(Offset = "0x10")]
		internal readonly object request;

		[Token(Token = "0x4000AEC")]
		[FieldOffset(Offset = "0x18")]
		internal readonly X509Certificate certificate;

		[Token(Token = "0x4000AED")]
		[FieldOffset(Offset = "0x20")]
		internal readonly X509Chain chain;

		[Token(Token = "0x4000AEE")]
		[FieldOffset(Offset = "0x28")]
		internal readonly SslPolicyErrors sslPolicyErrors;

		[Token(Token = "0x4000AEF")]
		[FieldOffset(Offset = "0x2C")]
		internal bool result;

		[Token(Token = "0x6001375")]
		[Address(RVA = "0x617EBC0", Offset = "0x617DBC0", VA = "0x617EBC0")]
		internal CallbackContext(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
		{
		}
	}

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x10")]
	private readonly RemoteCertificateValidationCallback m_ValidationCallback;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExecutionContext m_Context;

	[Token(Token = "0x17000447")]
	internal RemoteCertificateValidationCallback ValidationCallback
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x617E9B0", Offset = "0x617D9B0", VA = "0x617E9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x617E930", Offset = "0x617D930", VA = "0x617E930")]
	internal ServerCertValidationCallback(RemoteCertificateValidationCallback validationCallback)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x617E9C0", Offset = "0x617D9C0", VA = "0x617E9C0")]
	internal void Callback(object state)
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x617EA60", Offset = "0x617DA60", VA = "0x617EA60")]
	internal bool Invoke(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
	{
		return default(bool);
	}
}
