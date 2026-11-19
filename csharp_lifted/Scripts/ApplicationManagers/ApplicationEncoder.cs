// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationEncoder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationEncoder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Net;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200098A")]
internal class ApplicationEncoder
{
	[Token(Token = "0x6005930")]
	[Address(RVA = "0x5D1EB90", Offset = "0x5D1DB90", VA = "0x5D1EB90")]
	public static string Encode(string str)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Encode): clean
		int iVar1;
		String pSVar2;

		if (str != null) {
			iVar1 = str._stringLength;
			pSVar2 = Convert.ToString((int32_t)(0x1c4 % (long)iVar1));
			pSVar2 = String.Concat(str, "jB8a$raC", pSVar2);
			if (pSVar2 != null) {
				pSVar2 = pSVar2.Substring(5);
				pSVar2 = String.Concat(pSVar2, "F5P*");
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005931")]
	[Address(RVA = "0x5D0A630", Offset = "0x5D09630", VA = "0x5D0A630")]
	public static NetworkCredential GetTempBuffer()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$GetTempBuffer): clean
		String password;
		NetworkCredential __this;
		String pSVar1;

		password = ApplicationEncoder.Encode("GGY^hd1bJuD4g@11.15.2026");
		pSVar1 = "E^R%4#PXY89*76^snR11.15.2026";
		if (password == null) {
			throw new NullReferenceException();
		}
		if (password._stringLength < 0x3e9) {
			password = ApplicationEncoder.Encode1(pSVar1);
			pSVar1 = "REa9CMK4mN34Ec#86xN%!psve%J14C1S";
		}
		else {
			pSVar1 = password;
		}
		__this = new NetworkCredential(pSVar1, password);
		return __this;
	}

	[Token(Token = "0x6005932")]
	[Address(RVA = "0x5D0A7E0", Offset = "0x5D097E0", VA = "0x5D0A7E0")]
	public static NetworkCredential Encode1a(string str)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Encode1a): clean
		String password;
		NetworkCredential __this;

		password = ApplicationEncoder.Encode1(str);
		__this = new NetworkCredential("REa9CMK4mN34Ec#86xN%!psve%J14C1S", password);
		return __this;
	}

	[Token(Token = "0x6005933")]
	[Address(RVA = "0x5D1EC50", Offset = "0x5D1DC50", VA = "0x5D1EC50")]
	private static string Encode1(string str)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Encode1): clean
		String pSVar1;
		MethodInfo pMVar2;

		pSVar1 = String.Concat(str, "jP3p#");
		pSVar1 = String.Concat(pSVar1, "gqP9$");
		pSVar1 = String.Concat("u8A5ACZhC^!6", pSVar1);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = pSVar1.Substring(0, pSVar1._stringLength + -1);
		pSVar1 = ApplicationEncoder.Compress3(pSVar1);
		pMVar2 = (MethodInfo *)"Sru3%";
		pSVar1 = String.Concat(pSVar1, "Sru3%");
		pSVar1 = ApplicationEncoder.Encode3(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6005934")]
	[Address(RVA = "0x5D1ED30", Offset = "0x5D1DD30", VA = "0x5D1ED30")]
	private static string Encode2(string str)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Encode2): clean
		String pSVar1;
		MethodInfo method_00;

		pSVar1 = ApplicationEncoder.Compress3(str);
		method_00 = (MethodInfo *)"Sru3%";
		pSVar1 = String.Concat(pSVar1, "Sru3%");
		pSVar1 = ApplicationEncoder.Encode3(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6005935")]
	[Address(RVA = "0x5D1EEE0", Offset = "0x5D1DEE0", VA = "0x5D1EEE0")]
	private static string Encode3(string str)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Encode3): clean
		int iVar1;
		String str1;
		String str0;
		uint index;
		ushort local_2a;

		local_2a = 0;
		if (str == null) {
			throw new NullReferenceException();
		}
		iVar1 = str._stringLength;
		str0 = "";
		if (0 < iVar1) {
			index = 0;
			do {
				if ((index & 1) == 0) {
					local_2a = str.get_Chars(index);
					str1 = Char.ToString(ref local_2a);
					str0 = String.Concat(str0, str1);
					iVar1 = str._stringLength;
				}
				index = index + 1;
			} while ((int)index < iVar1);
		}
		return str0;
	}

	[Token(Token = "0x6005936")]
	[Address(RVA = "0x5D1EFB0", Offset = "0x5D1DFB0", VA = "0x5D1EFB0")]
	private static byte[] Compress(string text)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Compress): clean
		bool bVar1;
		Byte[] pSVar2;
		Encoding pSVar3;

		bVar1 = (text == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar1) {
			pSVar2 = (Byte[])new byte[0];
			return pSVar2;
		}
		pSVar3 = Encoding.UTF8;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x6005937")]
	[Address(RVA = "0x5D1ED80", Offset = "0x5D1DD80", VA = "0x5D1ED80")]
	private static string Compress3(string text)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$Compress3): clean
		int iVar1;
		bool bVar2;
		int value;
		String pSVar3;
		Byte[] inArray;
		Encoding pSVar4;

		bVar2 = (text == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar2) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (text == null) {
	label_05e1eed5: ;
			throw new NullReferenceException();
		}
		iVar1 = text._stringLength;
		value = Math.Min(iVar1 / 2, 0xf);
		pSVar3 = Convert.ToString(value);
		pSVar3 = String.Concat(text, pSVar3);
		bVar2 = (pSVar3 == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar2) {
			inArray = (Byte[])new byte[0];
		}
		else {
			pSVar4 = Encoding.UTF8;
			if (pSVar4 == null) goto label_05e1eed5;
			inArray = pSVar4.GetBytes(pSVar3);
		}
		pSVar3 = Convert.ToBase64String(inArray);
		return pSVar3;
	}

	[Token(Token = "0x6005938")]
	[Address(RVA = "0x5D1F040", Offset = "0x5D1E040", VA = "0x5D1F040")]
	public ApplicationEncoder()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationEncoder.c (ApplicationManagers.ApplicationEncoder$$.ctor): clean
		base();
		return;
	}
}
