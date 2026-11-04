// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.ProcessStartInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security;
using System.Text;
using Il2CppDummyDll;

namespace System.Diagnostics;

[StructLayout(LayoutKind.Sequential)]
[Token(Token = "0x2000116")]
[TypeConverter(typeof(ExpandableObjectConverter))]
public sealed class ProcessStartInfo
{
	[Token(Token = "0x40004BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string fileName;

	[Token(Token = "0x40004BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string arguments;

	[Token(Token = "0x40004BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string directory;

	[Token(Token = "0x40004C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string verb;

	[Token(Token = "0x40004C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ProcessWindowStyle windowStyle;

	[Token(Token = "0x40004C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool errorDialog;

	[Token(Token = "0x40004C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr errorDialogParentHandle;

	[Token(Token = "0x40004C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool useShellExecute;

	[Token(Token = "0x40004C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string userName;

	[Token(Token = "0x40004C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string domain;

	[Token(Token = "0x40004C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private SecureString password;

	[Token(Token = "0x40004C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string passwordInClearText;

	[Token(Token = "0x40004C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool loadUserProfile;

	[Token(Token = "0x40004CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	private bool redirectStandardInput;

	[Token(Token = "0x40004CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
	private bool redirectStandardOutput;

	[Token(Token = "0x40004CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B")]
	private bool redirectStandardError;

	[Token(Token = "0x40004CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Encoding standardOutputEncoding;

	[Token(Token = "0x40004CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Encoding standardErrorEncoding;

	[Token(Token = "0x40004CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool createNoWindow;

	[Token(Token = "0x40004D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WeakReference weakParentProcess;

	[Token(Token = "0x40004D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal StringDictionary environmentVariables;

	[Token(Token = "0x40004D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] empty;

	[Token(Token = "0x40004D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Collection<string> _argumentList;

	[Token(Token = "0x40004D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IDictionary<string, string> environment;

	[Token(Token = "0x17000112")]
	public Collection<string> ArgumentList
	{
		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x2863ED0", Offset = "0x28624D0", VA = "0x182863ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	[NotifyParentProperty(true)]
	[SettingsBindable(true)]
	[DefaultValue("")]
	[MonitoringDescription("Command line arguments that will be passed to the application specified by the FileName property.")]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	public string Arguments
	{
		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	[Editor("System.Diagnostics.Design.StringDictionaryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	[MonitoringDescription("Set of environment variables that apply to this process and child processes.")]
	[DefaultValue(null)]
	[NotifyParentProperty(true)]
	public StringDictionary EnvironmentVariables
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x2863F60", Offset = "0x2862560", VA = "0x182863F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process command input is read from the Process instance's StandardInput member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardInput
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x12BEF40", Offset = "0x12BD540", VA = "0x1812BEF40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000116")]
	[NotifyParentProperty(true)]
	[MonitoringDescription("Whether the process output is written to the Process instance's StandardOutput member.")]
	[DefaultValue(false)]
	public bool RedirectStandardOutput
	{
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x26EDC80", Offset = "0x26EC280", VA = "0x1826EDC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000117")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process's error output is written to the Process instance's StandardError member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardError
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x1D90450", Offset = "0x1D8EA50", VA = "0x181D90450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000118")]
	public Encoding StandardErrorEncoding
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	public Encoding StandardOutputEncoding
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	[DefaultValue(true)]
	[MonitoringDescription("Whether to use the operating system shell to start the process.")]
	[NotifyParentProperty(true)]
	public bool UseShellExecute
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011B")]
	[NotifyParentProperty(true)]
	public string UserName
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x1AED900", Offset = "0x1AEBF00", VA = "0x181AED900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	public SecureString Password
	{
		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011D")]
	[NotifyParentProperty(true)]
	public string Domain
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x278F400", Offset = "0x278DA00", VA = "0x18278F400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	[NotifyParentProperty(true)]
	public bool LoadUserProfile
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011F")]
	[NotifyParentProperty(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[SettingsBindable(true)]
	[MonitoringDescription("The name of the application, document or URL to start.")]
	[DefaultValue("")]
	[Editor("System.Diagnostics.Design.StartFileNameEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	public string FileName
	{
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000120")]
	[SettingsBindable(true)]
	[DefaultValue("")]
	[MonitoringDescription("The initial working directory for the process.")]
	[Editor("System.Diagnostics.Design.WorkingDirectoryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[NotifyParentProperty(true)]
	public string WorkingDirectory
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x278CCF0", Offset = "0x278B2F0", VA = "0x18278CCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	internal bool HaveEnvVars
	{
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x28643A0", Offset = "0x28629A0", VA = "0x1828643A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000122")]
	public Encoding StandardInputEncoding
	{
		[Token(Token = "0x60006C5")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x2863E40", Offset = "0x2862440", VA = "0x182863E40")]
	internal ProcessStartInfo(Process parent)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x2863E00", Offset = "0x2862400", VA = "0x182863E00")]
	public ProcessStartInfo(string fileName)
	{
	}
}
