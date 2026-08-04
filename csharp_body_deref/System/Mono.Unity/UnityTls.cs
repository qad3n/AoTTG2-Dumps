// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.UnityTls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Unity;

[Token(Token = "0x200000A")]
internal static class UnityTls
{
	[Token(Token = "0x200000B")]
	public enum unitytls_error_code : uint
	{
		[Token(Token = "0x400000A")]
		UNITYTLS_SUCCESS = 0u,
		[Token(Token = "0x400000B")]
		UNITYTLS_INVALID_ARGUMENT = 1u,
		[Token(Token = "0x400000C")]
		UNITYTLS_INVALID_FORMAT = 2u,
		[Token(Token = "0x400000D")]
		UNITYTLS_INVALID_PASSWORD = 3u,
		[Token(Token = "0x400000E")]
		UNITYTLS_INVALID_STATE = 4u,
		[Token(Token = "0x400000F")]
		UNITYTLS_BUFFER_OVERFLOW = 5u,
		[Token(Token = "0x4000010")]
		UNITYTLS_OUT_OF_MEMORY = 6u,
		[Token(Token = "0x4000011")]
		UNITYTLS_INTERNAL_ERROR = 7u,
		[Token(Token = "0x4000012")]
		UNITYTLS_NOT_SUPPORTED = 8u,
		[Token(Token = "0x4000013")]
		UNITYTLS_ENTROPY_SOURCE_FAILED = 9u,
		[Token(Token = "0x4000014")]
		UNITYTLS_STREAM_CLOSED = 10u,
		[Token(Token = "0x4000015")]
		UNITYTLS_DER_PARSE_ERROR = 11u,
		[Token(Token = "0x4000016")]
		UNITYTLS_KEY_PARSE_ERROR = 12u,
		[Token(Token = "0x4000017")]
		UNITYTLS_SSL_ERROR = 13u,
		[Token(Token = "0x4000018")]
		UNITYTLS_USER_CUSTOM_ERROR_START = 1048576u,
		[Token(Token = "0x4000019")]
		UNITYTLS_USER_WOULD_BLOCK = 1048577u,
		[Token(Token = "0x400001A")]
		UNITYTLS_USER_WOULD_BLOCK_READ = 1048578u,
		[Token(Token = "0x400001B")]
		UNITYTLS_USER_WOULD_BLOCK_WRITE = 1048579u,
		[Token(Token = "0x400001C")]
		UNITYTLS_USER_READ_FAILED = 1048580u,
		[Token(Token = "0x400001D")]
		UNITYTLS_USER_WRITE_FAILED = 1048581u,
		[Token(Token = "0x400001E")]
		UNITYTLS_USER_UNKNOWN_ERROR = 1048582u,
		[Token(Token = "0x400001F")]
		UNITYTLS_SSL_NEEDS_VERIFY = 1048583u,
		[Token(Token = "0x4000020")]
		UNITYTLS_HANDSHAKE_STEP = 1048584u,
		[Token(Token = "0x4000021")]
		UNITYTLS_USER_CUSTOM_ERROR_END = 2097152u
	}

	[Token(Token = "0x200000C")]
	public enum unitytls_log_level : uint
	{
		[Token(Token = "0x4000023")]
		UNITYTLS_LOGLEVEL_MIN = 0u,
		[Token(Token = "0x4000024")]
		UNITYTLS_LOGLEVEL_FATAL = 0u,
		[Token(Token = "0x4000025")]
		UNITYTLS_LOGLEVEL_ERROR = 1u,
		[Token(Token = "0x4000026")]
		UNITYTLS_LOGLEVEL_WARN = 2u,
		[Token(Token = "0x4000027")]
		UNITYTLS_LOGLEVEL_INFO = 3u,
		[Token(Token = "0x4000028")]
		UNITYTLS_LOGLEVEL_DEBUG = 4u,
		[Token(Token = "0x4000029")]
		UNITYTLS_LOGLEVEL_TRACE = 5u,
		[Token(Token = "0x400002A")]
		UNITYTLS_LOGLEVEL_MAX = 5u
	}

	[Token(Token = "0x200000D")]
	public struct unitytls_errorstate
	{
		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private uint magic;

		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public unitytls_error_code code;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private ulong reserved;
	}

	[Token(Token = "0x200000E")]
	public struct unitytls_key
	{
	}

	[Token(Token = "0x200000F")]
	public struct unitytls_key_ref
	{
		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong handle;
	}

	[Token(Token = "0x2000010")]
	public struct unitytls_x509_ref
	{
		[Token(Token = "0x400002F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong handle;
	}

	[Token(Token = "0x2000011")]
	public struct unitytls_x509list
	{
	}

	[Token(Token = "0x2000012")]
	public struct unitytls_x509list_ref
	{
		[Token(Token = "0x4000030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong handle;
	}

	[Token(Token = "0x2000013")]
	[Flags]
	public enum unitytls_x509verify_result : uint
	{
		[Token(Token = "0x4000032")]
		UNITYTLS_X509VERIFY_SUCCESS = 0u,
		[Token(Token = "0x4000033")]
		UNITYTLS_X509VERIFY_NOT_DONE = 0x80000000u,
		[Token(Token = "0x4000034")]
		UNITYTLS_X509VERIFY_FATAL_ERROR = uint.MaxValue,
		[Token(Token = "0x4000035")]
		UNITYTLS_X509VERIFY_FLAG_EXPIRED = 1u,
		[Token(Token = "0x4000036")]
		UNITYTLS_X509VERIFY_FLAG_REVOKED = 2u,
		[Token(Token = "0x4000037")]
		UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 4u,
		[Token(Token = "0x4000038")]
		UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 8u,
		[Token(Token = "0x4000039")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_NOT_TRUSTED = 0x10u,
		[Token(Token = "0x400003A")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_EXPIRED = 0x20u,
		[Token(Token = "0x400003B")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_MISSING = 0x40u,
		[Token(Token = "0x400003C")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_SKIP_VERIFY = 0x80u,
		[Token(Token = "0x400003D")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_OTHER = 0x100u,
		[Token(Token = "0x400003E")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_FUTURE = 0x200u,
		[Token(Token = "0x400003F")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_FUTURE = 0x400u,
		[Token(Token = "0x4000040")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_KEY_USAGE = 0x800u,
		[Token(Token = "0x4000041")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_EXT_KEY_USAGE = 0x1000u,
		[Token(Token = "0x4000042")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_NS_CERT_TYPE = 0x2000u,
		[Token(Token = "0x4000043")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_MD = 0x4000u,
		[Token(Token = "0x4000044")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_PK = 0x8000u,
		[Token(Token = "0x4000045")]
		UNITYTLS_X509VERIFY_FLAG_BADCERT_BAD_KEY = 0x10000u,
		[Token(Token = "0x4000046")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_MD = 0x20000u,
		[Token(Token = "0x4000047")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_PK = 0x40000u,
		[Token(Token = "0x4000048")]
		UNITYTLS_X509VERIFY_FLAG_BADCRL_BAD_KEY = 0x80000u,
		[Token(Token = "0x4000049")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 0x10000u,
		[Token(Token = "0x400004A")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 0x20000u,
		[Token(Token = "0x400004B")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 0x40000u,
		[Token(Token = "0x400004C")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 0x80000u,
		[Token(Token = "0x400004D")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 0x100000u,
		[Token(Token = "0x400004E")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 0x200000u,
		[Token(Token = "0x400004F")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 0x400000u,
		[Token(Token = "0x4000050")]
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 0x800000u,
		[Token(Token = "0x4000051")]
		UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 0x8000000u
	}

	[Token(Token = "0x2000014")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate unitytls_x509verify_result unitytls_x509verify_callback(void* userData, unitytls_x509_ref cert, unitytls_x509verify_result result, unitytls_errorstate* errorState);

	[Token(Token = "0x2000015")]
	public struct unitytls_tlsctx
	{
	}

	[Token(Token = "0x2000016")]
	public struct unitytls_x509name
	{
	}

	[Token(Token = "0x2000017")]
	public enum unitytls_ciphersuite : uint
	{
		[Token(Token = "0x4000053")]
		UNITYTLS_CIPHERSUITE_INVALID = 16777215u
	}

	[Token(Token = "0x2000018")]
	public enum unitytls_protocol : uint
	{
		[Token(Token = "0x4000055")]
		UNITYTLS_PROTOCOL_TLS_1_0,
		[Token(Token = "0x4000056")]
		UNITYTLS_PROTOCOL_TLS_1_1,
		[Token(Token = "0x4000057")]
		UNITYTLS_PROTOCOL_TLS_1_2,
		[Token(Token = "0x4000058")]
		UNITYTLS_PROTOCOL_INVALID
	}

	[Token(Token = "0x2000019")]
	public struct unitytls_tlsctx_protocolrange
	{
		[Token(Token = "0x4000059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unitytls_protocol min;

		[Token(Token = "0x400005A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public unitytls_protocol max;
	}

	[Token(Token = "0x200001A")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate IntPtr unitytls_tlsctx_write_callback(void* userData, byte* data, IntPtr bufferLen, unitytls_errorstate* errorState);

	[Token(Token = "0x200001B")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate IntPtr unitytls_tlsctx_read_callback(void* userData, byte* buffer, IntPtr bufferLen, unitytls_errorstate* errorState);

	[Token(Token = "0x200001C")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate void unitytls_tlsctx_trace_callback(void* userData, unitytls_tlsctx* ctx, byte* traceMessage, IntPtr traceMessageLen);

	[Token(Token = "0x200001D")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate void unitytls_tlsctx_certificate_callback(void* userData, unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, unitytls_x509name* caList, IntPtr caListLen, unitytls_x509list_ref* chain, unitytls_key_ref* key, unitytls_errorstate* errorState);

	[Token(Token = "0x200001E")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public unsafe delegate unitytls_x509verify_result unitytls_tlsctx_x509verify_callback(void* userData, unitytls_x509list_ref chain, unitytls_errorstate* errorState);

	[Token(Token = "0x200001F")]
	public struct unitytls_tlsctx_callbacks
	{
		[Token(Token = "0x400005B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unitytls_tlsctx_read_callback read;

		[Token(Token = "0x400005C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public unitytls_tlsctx_write_callback write;

		[Token(Token = "0x400005D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public unsafe void* data;
	}

	[StructLayout((LayoutKind)0)]
	[Token(Token = "0x2000020")]
	public class unitytls_interface_struct
	{
		[Token(Token = "0x2000021")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate unitytls_errorstate unitytls_errorstate_create_t();

		[Token(Token = "0x2000022")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_errorstate_raise_error_t(unitytls_errorstate* errorState, unitytls_error_code errorCode);

		[Token(Token = "0x2000023")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_key_ref unitytls_key_get_ref_t(unitytls_key* key, unitytls_errorstate* errorState);

		[Token(Token = "0x2000024")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_key* unitytls_key_parse_der_t(byte* buffer, IntPtr bufferLen, byte* password, IntPtr passwordLen, unitytls_errorstate* errorState);

		[Token(Token = "0x2000025")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_key* unitytls_key_parse_pem_t(byte* buffer, IntPtr bufferLen, byte* password, IntPtr passwordLen, unitytls_errorstate* errorState);

		[Token(Token = "0x2000026")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_key_free_t(unitytls_key* key);

		[Token(Token = "0x2000027")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate IntPtr unitytls_x509_export_der_t(unitytls_x509_ref cert, byte* buffer, IntPtr bufferLen, unitytls_errorstate* errorState);

		[Token(Token = "0x2000028")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509list_ref unitytls_x509list_get_ref_t(unitytls_x509list* list, unitytls_errorstate* errorState);

		[Token(Token = "0x2000029")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509_ref unitytls_x509list_get_x509_t(unitytls_x509list_ref list, IntPtr index, unitytls_errorstate* errorState);

		[Token(Token = "0x200002A")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509list* unitytls_x509list_create_t(unitytls_errorstate* errorState);

		[Token(Token = "0x200002B")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_x509list_append_t(unitytls_x509list* list, unitytls_x509_ref cert, unitytls_errorstate* errorState);

		[Token(Token = "0x200002C")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_x509list_append_der_t(unitytls_x509list* list, byte* buffer, IntPtr bufferLen, unitytls_errorstate* errorState);

		[Token(Token = "0x200002D")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_x509list_free_t(unitytls_x509list* list);

		[Token(Token = "0x200002E")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509verify_result unitytls_x509verify_default_ca_t(unitytls_x509list_ref chain, byte* cn, IntPtr cnLen, unitytls_x509verify_callback cb, void* userData, unitytls_errorstate* errorState);

		[Token(Token = "0x200002F")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509verify_result unitytls_x509verify_explicit_ca_t(unitytls_x509list_ref chain, unitytls_x509list_ref trustCA, byte* cn, IntPtr cnLen, unitytls_x509verify_callback cb, void* userData, unitytls_errorstate* errorState);

		[Token(Token = "0x2000030")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_tlsctx* unitytls_tlsctx_create_server_t(unitytls_tlsctx_protocolrange supportedProtocols, unitytls_tlsctx_callbacks callbacks, ulong certChain, ulong leafCertificateKey, unitytls_errorstate* errorState);

		[Token(Token = "0x2000031")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_tlsctx* unitytls_tlsctx_create_client_t(unitytls_tlsctx_protocolrange supportedProtocols, unitytls_tlsctx_callbacks callbacks, byte* cn, IntPtr cnLen, unitytls_errorstate* errorState);

		[Token(Token = "0x2000032")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_server_require_client_authentication_t(unitytls_tlsctx* ctx, unitytls_x509list_ref clientAuthCAList, unitytls_errorstate* errorState);

		[Token(Token = "0x2000033")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_set_certificate_callback_t(unitytls_tlsctx* ctx, unitytls_tlsctx_certificate_callback cb, void* userData, unitytls_errorstate* errorState);

		[Token(Token = "0x2000034")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_set_trace_callback_t(unitytls_tlsctx* ctx, unitytls_tlsctx_trace_callback cb, void* userData, unitytls_errorstate* errorState);

		[Token(Token = "0x2000035")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_set_x509verify_callback_t(unitytls_tlsctx* ctx, unitytls_tlsctx_x509verify_callback cb, void* userData, unitytls_errorstate* errorState);

		[Token(Token = "0x2000036")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_set_supported_ciphersuites_t(unitytls_tlsctx* ctx, unitytls_ciphersuite* supportedCiphersuites, IntPtr supportedCiphersuitesLen, unitytls_errorstate* errorState);

		[Token(Token = "0x2000037")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_ciphersuite unitytls_tlsctx_get_ciphersuite_t(unitytls_tlsctx* ctx, unitytls_errorstate* errorState);

		[Token(Token = "0x2000038")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_protocol unitytls_tlsctx_get_protocol_t(unitytls_tlsctx* ctx, unitytls_errorstate* errorState);

		[Token(Token = "0x2000039")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate unitytls_x509verify_result unitytls_tlsctx_process_handshake_t(unitytls_tlsctx* ctx, unitytls_errorstate* errorState);

		[Token(Token = "0x200003A")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate IntPtr unitytls_tlsctx_read_t(unitytls_tlsctx* ctx, byte* buffer, IntPtr bufferLen, unitytls_errorstate* errorState);

		[Token(Token = "0x200003B")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate IntPtr unitytls_tlsctx_write_t(unitytls_tlsctx* ctx, byte* data, IntPtr bufferLen, unitytls_errorstate* errorState);

		[Token(Token = "0x200003C")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_notify_close_t(unitytls_tlsctx* ctx, unitytls_errorstate* errorState);

		[Token(Token = "0x200003D")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_free_t(unitytls_tlsctx* ctx);

		[Token(Token = "0x200003E")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_random_generate_bytes_t(byte* buffer, IntPtr bufferLen, unitytls_errorstate* errorState);

		[Token(Token = "0x200003F")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate char* unitytls_x509verify_result_to_string_t(unitytls_x509verify_result v);

		[Token(Token = "0x2000040")]
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public unsafe delegate void unitytls_tlsctx_set_trace_level_t(unitytls_tlsctx* ctx, unitytls_log_level level);

		[Token(Token = "0x400005E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly ulong UNITYTLS_INVALID_HANDLE;

		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

		[Token(Token = "0x4000060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public unitytls_errorstate_create_t unitytls_errorstate_create;

		[Token(Token = "0x4000061")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public unitytls_errorstate_raise_error_t unitytls_errorstate_raise_error;

		[Token(Token = "0x4000062")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public unitytls_key_get_ref_t unitytls_key_get_ref;

		[Token(Token = "0x4000063")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public unitytls_key_parse_der_t unitytls_key_parse_der;

		[Token(Token = "0x4000064")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public unitytls_key_parse_pem_t unitytls_key_parse_pem;

		[Token(Token = "0x4000065")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public unitytls_key_free_t unitytls_key_free;

		[Token(Token = "0x4000066")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public unitytls_x509_export_der_t unitytls_x509_export_der;

		[Token(Token = "0x4000067")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public unitytls_x509list_get_ref_t unitytls_x509list_get_ref;

		[Token(Token = "0x4000068")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public unitytls_x509list_get_x509_t unitytls_x509list_get_x509;

		[Token(Token = "0x4000069")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public unitytls_x509list_create_t unitytls_x509list_create;

		[Token(Token = "0x400006A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public unitytls_x509list_append_t unitytls_x509list_append;

		[Token(Token = "0x400006B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public unitytls_x509list_append_der_t unitytls_x509list_append_der;

		[Token(Token = "0x400006C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		public unitytls_x509list_append_der_t unitytls_x509list_append_pem;

		[Token(Token = "0x400006D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		public unitytls_x509list_free_t unitytls_x509list_free;

		[Token(Token = "0x400006E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		public unitytls_x509verify_default_ca_t unitytls_x509verify_default_ca;

		[Token(Token = "0x400006F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		public unitytls_x509verify_explicit_ca_t unitytls_x509verify_explicit_ca;

		[Token(Token = "0x4000070")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		public unitytls_tlsctx_create_server_t unitytls_tlsctx_create_server;

		[Token(Token = "0x4000071")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		public unitytls_tlsctx_create_client_t unitytls_tlsctx_create_client;

		[Token(Token = "0x4000072")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		public unitytls_tlsctx_server_require_client_authentication_t unitytls_tlsctx_server_require_client_authentication;

		[Token(Token = "0x4000073")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		public unitytls_tlsctx_set_certificate_callback_t unitytls_tlsctx_set_certificate_callback;

		[Token(Token = "0x4000074")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		public unitytls_tlsctx_set_trace_callback_t unitytls_tlsctx_set_trace_callback;

		[Token(Token = "0x4000075")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
		public unitytls_tlsctx_set_x509verify_callback_t unitytls_tlsctx_set_x509verify_callback;

		[Token(Token = "0x4000076")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		public unitytls_tlsctx_set_supported_ciphersuites_t unitytls_tlsctx_set_supported_ciphersuites;

		[Token(Token = "0x4000077")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		public unitytls_tlsctx_get_ciphersuite_t unitytls_tlsctx_get_ciphersuite;

		[Token(Token = "0x4000078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
		public unitytls_tlsctx_get_protocol_t unitytls_tlsctx_get_protocol;

		[Token(Token = "0x4000079")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
		public unitytls_tlsctx_process_handshake_t unitytls_tlsctx_process_handshake;

		[Token(Token = "0x400007A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
		public unitytls_tlsctx_read_t unitytls_tlsctx_read;

		[Token(Token = "0x400007B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		public unitytls_tlsctx_write_t unitytls_tlsctx_write;

		[Token(Token = "0x400007C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
		public unitytls_tlsctx_notify_close_t unitytls_tlsctx_notify_close;

		[Token(Token = "0x400007D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
		public unitytls_tlsctx_free_t unitytls_tlsctx_free;

		[Token(Token = "0x400007E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
		public unitytls_random_generate_bytes_t unitytls_random_generate_bytes;

		[Token(Token = "0x400007F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
		public unitytls_x509verify_result_to_string_t unitytls_x509verify_result_to_string;

		[Token(Token = "0x4000080")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
		public unitytls_tlsctx_set_trace_level_t unitytls_tlsctx_set_trace_level;

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x451B2F0", Offset = "0x451B2F0", VA = "0x451B2F0")]
		public unitytls_interface_struct()
		{
		}
	}

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static unitytls_interface_struct marshalledInterface;

	[Token(Token = "0x17000008")]
	public static bool IsSupported
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x451ADF0", Offset = "0x451ADF0", VA = "0x451ADF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public static unitytls_interface_struct NativeInterface
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x451AB40", Offset = "0x451AB40", VA = "0x451AB40")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x451ADE0", Offset = "0x451ADE0", VA = "0x451ADE0")]
	private static extern IntPtr GetUnityTlsInterface();
}
