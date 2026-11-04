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

[Token(Token = "0x200030D")]
internal class ServerCertValidationCallback
{
	[Token(Token = "0x200030E")]
	private class CallbackContext
	{
		[Token(Token = "0x4000BBA")]
		[FieldOffset(Offset = "0x10")]
		internal readonly object request;

		[Token(Token = "0x4000BBB")]
		[FieldOffset(Offset = "0x18")]
		internal readonly X509Certificate certificate;

		[Token(Token = "0x4000BBC")]
		[FieldOffset(Offset = "0x20")]
		internal readonly X509Chain chain;

		[Token(Token = "0x4000BBD")]
		[FieldOffset(Offset = "0x28")]
		internal readonly SslPolicyErrors sslPolicyErrors;

		[Token(Token = "0x4000BBE")]
		[FieldOffset(Offset = "0x2C")]
		internal bool result;

		[Token(Token = "0x6001533")]
		[Address(RVA = "0x27DCE50", Offset = "0x27DB450", VA = "0x1827DCE50")]
		internal CallbackContext(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
		{
		}
	}

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x10")]
	private readonly RemoteCertificateValidationCallback m_ValidationCallback;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExecutionContext m_Context;

	[Token(Token = "0x17000476")]
	internal RemoteCertificateValidationCallback ValidationCallback
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x27E84D0", Offset = "0x27E6AD0", VA = "0x1827E84D0")]
	internal ServerCertValidationCallback(RemoteCertificateValidationCallback validationCallback)
	{
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x27E82B0", Offset = "0x27E68B0", VA = "0x1827E82B0")]
	internal void Callback(object state)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x27E8360", Offset = "0x27E6960", VA = "0x1827E8360")]
	internal bool Invoke(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
	{
		return default(bool);
	}
}
