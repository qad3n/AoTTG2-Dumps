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

[Token(Token = "0x2000185")]
internal class ServerCertValidationCallback
{
	[Token(Token = "0x2000186")]
	private class CallbackContext
	{
		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x10")]
		internal readonly object request;

		[Token(Token = "0x40007A5")]
		[FieldOffset(Offset = "0x18")]
		internal readonly X509Certificate certificate;

		[Token(Token = "0x40007A6")]
		[FieldOffset(Offset = "0x20")]
		internal readonly X509Chain chain;

		[Token(Token = "0x40007A7")]
		[FieldOffset(Offset = "0x28")]
		internal readonly SslPolicyErrors sslPolicyErrors;

		[Token(Token = "0x40007A8")]
		[FieldOffset(Offset = "0x2C")]
		internal bool result;

		[Token(Token = "0x6000973")]
		[Address(RVA = "0x497C2D0", Offset = "0x497C2D0", VA = "0x497C2D0")]
		internal CallbackContext(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
		{
		}
	}

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x10")]
	private readonly RemoteCertificateValidationCallback m_ValidationCallback;

	[Token(Token = "0x40007A3")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExecutionContext m_Context;

	[Token(Token = "0x17000221")]
	internal RemoteCertificateValidationCallback ValidationCallback
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x497C0B0", Offset = "0x497C0B0", VA = "0x497C0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x497C030", Offset = "0x497C030", VA = "0x497C030")]
	internal ServerCertValidationCallback(RemoteCertificateValidationCallback validationCallback)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x497C0C0", Offset = "0x497C0C0", VA = "0x497C0C0")]
	internal void Callback(object state)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x497C160", Offset = "0x497C160", VA = "0x497C160")]
	internal bool Invoke(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
	{
		return default(bool);
	}
}
