// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DeviceLockedEncryption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DeviceLockedEncryption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000924")]
internal class DeviceLockedEncryption
{
	[Token(Token = "0x4002E0C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string SecretSalt;

	[Token(Token = "0x600566D")]
	[Address(RVA = "0x5CEB530", Offset = "0x5CEA530", VA = "0x5CEB530")]
	private static byte[] GetDeviceSpecificKey()
	{
		// Lifted from source/cpp/Utility/DeviceLockedEncryption.c (Utility.DeviceLockedEncryption$$GetDeviceSpecificKey): 2 lines keep C-only constructs
		String pSVar3;
		SHA256 pSVar4;
		Encoding pSVar5;
		Byte[] pSVar6;
		SHA256 local_30;
		SHA256* local_20;

		pSVar3 = SystemInfo.deviceUniqueIdentifier;
		pSVar3 = String.Concat(pSVar3, DeviceLockedEncryption.SecretSalt);
		pSVar4 = SHA256.Create();
		local_20 = &local_30;
		local_30 = pSVar4;
		pSVar5 = Encoding.UTF8;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pSVar5.GetBytes(pSVar3);
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pSVar4.ComputeHash(pSVar6);
		pSVar4 = local_30;
		if (local_30 != null) {
			pSVar4.Dispose();
		}
		return pSVar6;
	}

	[Token(Token = "0x600566E")]
	[Address(RVA = "0x5CEB6F0", Offset = "0x5CEA6F0", VA = "0x5CEB6F0")]
	public static string Encrypt(string plainText)
	{
		// Lifted from source/cpp/Utility/DeviceLockedEncryption.c (Utility.DeviceLockedEncryption$$Encrypt): 8 lines keep C-only constructs
		Aes pSVar6;
		Byte[] pSVar7;
		Byte[] pSVar8;
		Byte[] pSVar9;
		ICryptoTransform transform;
		MemoryStream pSVar10;
		CryptoStream pSVar11;
		StreamWriter pSVar12;
		String pSVar14;
		Aes local_88;
		MemoryStream local_80;
		StreamWriter local_78;
		CryptoStream local_70;
		StreamWriter* local_60;
		CryptoStream* local_50;
		MemoryStream* local_40;
		byte local_30;

		local_80 = null;
		local_70 = null;
		local_78 = null;
		pSVar7 = DeviceLockedEncryption.GetDeviceSpecificKey();
		local_88 = Aes.Create();
		local_30 = (byte)&local_88;
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		local_30 = (byte)&local_88;
		local_88.set_Key(pSVar7);
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		local_88.GenerateIV();
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = local_88.get_IV();
		pSVar6 = local_88;
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = local_88.get_Key();
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = local_88.get_IV();
		transform = (ICryptoTransform)pSVar6.unknown(pSVar8, pSVar9);
		pSVar10 = new MemoryStream();
		local_40 = &local_80;
		local_80 = pSVar10;
		if ((pSVar7 == null) || (pSVar10 == null)) {
			throw new NullReferenceException();
		}
		pSVar10.Write(pSVar7, 0, (int32_t)pSVar7.Length);
		pSVar10 = local_80;
		pSVar11 = new CryptoStream((Stream)pSVar10, transform, 1);
		local_50 = &local_70;
		local_70 = pSVar11;
		pSVar12 = new StreamWriter((Stream)pSVar11);
		local_60 = &local_78;
		local_78 = pSVar12;
		if (pSVar12 == null) {
			throw new NullReferenceException();
		}
		pSVar12.Write(plainText) ;
		pSVar12 = local_78;
		if (local_78 != null) {
			pSVar12.Dispose();
		}
		pSVar11 = local_70;
		if (local_70 != null) {
			pSVar11.Dispose();
		}
		if (local_80 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = local_80.ToArray();
		pSVar10 = local_80;
		if (local_80 != null) {
			pSVar10.Dispose();
		}
		pSVar6 = local_88;
		if (local_88 != null) {
			pSVar6.Dispose();
		}
		return pSVar14;
	}

	[Token(Token = "0x600566F")]
	[Address(RVA = "0x5CEBD80", Offset = "0x5CEAD80", VA = "0x5CEBD80")]
	public static string Decrypt(string cipherText)
	{
		// Lifted from source/cpp/Utility/DeviceLockedEncryption.c (Utility.DeviceLockedEncryption$$Decrypt): 8 lines keep C-only constructs
		Aes pSVar6;
		int iVar7;
		Byte[] pSVar8;
		Byte[] pSVar9;
		Byte[] buffer;
		ICryptoTransform transform;
		MemoryStream pSVar10;
		CryptoStream pSVar11;
		StreamReader pSVar12;
		String pSVar13;
		uint length;
		int iVar16;
		Aes local_88;
		StreamReader local_80;
		CryptoStream local_78;
		MemoryStream local_70;
		StreamReader* local_60;
		CryptoStream* local_50;
		MemoryStream* local_40;
		byte local_30;

		local_70 = null;
		local_78 = null;
		local_80 = null;
		pSVar8 = DeviceLockedEncryption.GetDeviceSpecificKey();
		pSVar9 = Convert.FromBase64String(cipherText);
		local_88 = Aes.Create();
		local_30 = (byte)&local_88;
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		local_30 = (byte)&local_88;
		local_88.set_Key(pSVar8);
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		iVar7 = local_88.get_BlockSize();
		iVar16 = iVar7 + 7;
		if (-1 < iVar7) {
			iVar16 = iVar7;
		}
		pSVar8 = (Byte[])new byte[iVar16 >> 3];
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		Array.Copy((Array)pSVar9, 0, (Array)pSVar8, 0, (int32_t)pSVar8.Length);
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		local_88.set_IV(pSVar8);
		if (pSVar9 == null) {
			throw new NullReferenceException();
		}
		length = (int)pSVar9.Length - (int)pSVar8.Length;
		buffer = (Byte[])new byte[length];
		Array.Copy((Array)pSVar9, (int32_t)pSVar8.Length, (Array)buffer, 0, length);
		pSVar6 = local_88;
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = local_88.get_Key();
		if (local_88 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = local_88.get_IV();
		transform = pSVar6.CreateDecryptor(pSVar8, pSVar9);
		pSVar10 = new MemoryStream(buffer);
		local_40 = &local_70;
		local_70 = pSVar10;
		pSVar11 = new CryptoStream((Stream)pSVar10, transform, 0);
		local_50 = &local_78;
		local_78 = pSVar11;
		pSVar12 = new StreamReader((Stream)pSVar11);
		local_60 = &local_80;
		local_80 = pSVar12;
		if (pSVar12 == null) {
			throw new NullReferenceException();
		}
		pSVar12 = local_80;
		if (local_80 != null) {
			pSVar12.Dispose();
		}
		pSVar11 = local_78;
		if (local_78 != null) {
			pSVar11.Dispose();
		}
		pSVar10 = local_70;
		if (local_70 != null) {
			pSVar10.Dispose();
		}
		pSVar6 = local_88;
		if (local_88 != null) {
			pSVar6.Dispose();
		}
		return pSVar13;
	}

	[Token(Token = "0x6005670")]
	[Address(RVA = "0x5CEC420", Offset = "0x5CEB420", VA = "0x5CEC420")]
	public DeviceLockedEncryption()
	{
		// Lifted from source/cpp/Utility/DeviceLockedEncryption.c (Utility.DeviceLockedEncryption$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/DeviceLockedEncryption.c.

	// Utility.DeviceLockedEncryption$$.cctor: clean
	static DeviceLockedEncryption()
	{
		DeviceLockedEncryption.SecretSalt = "YourCustomSecretSaltChangeThis_123!";
		return;
	}
}
